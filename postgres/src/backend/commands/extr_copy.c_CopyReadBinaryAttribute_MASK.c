
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_9__ {char* data; int len; int cursor; } ;
struct TYPE_8__ {TYPE_2__ attribute_buf; } ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef TYPE_1__* CopyState ;


 int FUNC_0 (TYPE_1__*,char*,int,int) ;
 int FUNC_1 (TYPE_1__*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static Datum
FUNC_8(CopyState VAR_3,
      int VAR_4, FmgrInfo *VAR_5,
      Oid VAR_6, int32 VAR_7,
      bool *VAR_8)
{
 int32 VAR_9;
 Datum VAR_10;

 if (!FUNC_1(VAR_3, &VAR_9))
  FUNC_4(VAR_2,
    (FUNC_5(VAR_0),
     FUNC_6("unexpected EOF in COPY data")));
 if (VAR_9 == -1)
 {
  *VAR_8 = 1;
  return FUNC_2(VAR_5, ((void*)0), VAR_6, VAR_7);
 }
 if (VAR_9 < 0)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_0),
     FUNC_6("invalid field size")));


 FUNC_7(&VAR_3->attribute_buf);

 FUNC_3(&VAR_3->attribute_buf, VAR_9);
 if (FUNC_0(VAR_3, VAR_3->attribute_buf.data,
     VAR_9, VAR_9) != VAR_9)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_0),
     FUNC_6("unexpected EOF in COPY data")));

 VAR_3->attribute_buf.len = VAR_9;
 VAR_3->attribute_buf.data[VAR_9] = '\0';


 VAR_10 = FUNC_2(VAR_5, &VAR_3->attribute_buf,
         VAR_6, VAR_7);


 if (VAR_3->attribute_buf.cursor != VAR_3->attribute_buf.len)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_6("incorrect binary data format")));

 *VAR_8 = 0;
 return VAR_10;
}
