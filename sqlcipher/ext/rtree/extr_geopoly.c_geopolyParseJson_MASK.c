
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_int64 ;
typedef int s ;
struct TYPE_9__ {unsigned char const* z; int nVertex; int nAlloc; scalar_t__* a; int nErr; } ;
struct TYPE_8__ {int nVertex; unsigned char* hdr; int a; } ;
typedef TYPE_1__ GeoPoly ;
typedef TYPE_2__ GeoParse ;
typedef scalar_t__ GeoCoord ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__*) ;
 char FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,scalar_t__*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (scalar_t__*) ;
 TYPE_1__* FUNC_6 (int ) ;
 scalar_t__* FUNC_7 (scalar_t__*,int) ;

__attribute__((used)) static GeoPoly *FUNC_8(const unsigned char *VAR_3, int *VAR_4){
  GeoParse VAR_5;
  int VAR_6 = VAR_2;
  FUNC_4(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.z = VAR_3;
  if( FUNC_2(&VAR_5)=='[' ){
    VAR_5.z++;
    while( FUNC_2(&VAR_5)=='[' ){
      int VAR_7 = 0;
      char VAR_8;
      VAR_5.z++;
      if( VAR_5.nVertex>=VAR_5.nAlloc ){
        GeoCoord *VAR_9;
        VAR_5.nAlloc = VAR_5.nAlloc*2 + 16;
        VAR_9 = FUNC_7(VAR_5.a, VAR_5.nAlloc*sizeof(GeoCoord)*2 );
        if( VAR_9==0 ){
          VAR_6 = VAR_1;
          VAR_5.nErr++;
          break;
        }
        VAR_5.a = VAR_9;
      }
      while( FUNC_1(&VAR_5, VAR_7<=1 ? &VAR_5.a[VAR_5.nVertex*2+VAR_7] : 0) ){
        VAR_7++;
        if( VAR_7==2 ) VAR_5.nVertex++;
        VAR_8 = FUNC_2(&VAR_5);
        VAR_5.z++;
        if( VAR_8==',' ) continue;
        if( VAR_8==']' && VAR_7>=2 ) break;
        VAR_5.nErr++;
        VAR_6 = VAR_0;
        goto parse_json_err;
      }
      if( FUNC_2(&VAR_5)==',' ){
        VAR_5.z++;
        continue;
      }
      break;
    }
    if( FUNC_2(&VAR_5)==']'
     && VAR_5.nVertex>=4
     && VAR_5.a[0]==VAR_5.a[VAR_5.nVertex*2-2]
     && VAR_5.a[1]==VAR_5.a[VAR_5.nVertex*2-1]
     && (VAR_5.z++, FUNC_2(&VAR_5)==0)
    ){
      GeoPoly *VAR_10;
      int VAR_11 = 1;
      VAR_5.nVertex--;
      VAR_10 = FUNC_6( FUNC_0((sqlite3_int64)VAR_5.nVertex) );
      VAR_11 = 1;
      if( VAR_10==0 ) goto parse_json_err;
      VAR_10->nVertex = VAR_5.nVertex;
      FUNC_3(VAR_10->a, VAR_5.a, VAR_5.nVertex*2*sizeof(GeoCoord));
      VAR_10->hdr[0] = *(unsigned char*)&VAR_11;
      VAR_10->hdr[1] = (VAR_5.nVertex>>16)&0xff;
      VAR_10->hdr[2] = (VAR_5.nVertex>>8)&0xff;
      VAR_10->hdr[3] = VAR_5.nVertex&0xff;
      FUNC_5(VAR_5.a);
      if( VAR_4 ) *VAR_4 = VAR_2;
      return VAR_10;
    }else{
      VAR_5.nErr++;
      VAR_6 = VAR_0;
    }
  }
parse_json_err:
  if( VAR_4 ) *VAR_4 = VAR_6;
  FUNC_5(VAR_5.a);
  return 0;
}
