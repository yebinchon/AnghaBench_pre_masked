
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u8 ;
typedef int tx ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;
typedef int i64 ;
struct TYPE_10__ {int iJD; int validHMS; double s; int D; int M; int Y; int validJD; int validTZ; int m; int h; } ;
typedef TYPE_1__ DateTime ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *,int*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (char const*,TYPE_1__*) ;
 int FUNC_8 (char*,double*,int,int ) ;
 int FUNC_9 (char const) ;
 int FUNC_10 (char) ;
 int FUNC_11 (char*) ;
 scalar_t__* VAR_2 ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*,int) ;

__attribute__((used)) static int FUNC_14(sqlite3_context *VAR_3, const char *VAR_4, DateTime *VAR_5){
  int VAR_6 = 1;
  int VAR_7;
  double VAR_8;
  char *VAR_9, VAR_10[30];
  VAR_9 = VAR_10;
  for(VAR_7=0; VAR_7<FUNC_0(VAR_10)-1 && VAR_4[VAR_7]; VAR_7++){
    VAR_9[VAR_7] = (char)VAR_2[(u8)VAR_4[VAR_7]];
  }
  VAR_9[VAR_7] = 0;
  switch( VAR_9[0] ){

    case 'l': {





      if( FUNC_12(VAR_9, "localtime")==0 ){
        FUNC_2(VAR_5);
        VAR_5->iJD += FUNC_5(VAR_5, VAR_3, &VAR_6);
        FUNC_1(VAR_5);
      }
      break;
    }

    case 'u': {






      if( FUNC_12(VAR_9, "unixepoch")==0 && VAR_5->validJD ){
        VAR_5->iJD = (VAR_5->iJD + 43200)/86400 + 21086676*(i64)10000000;
        FUNC_1(VAR_5);
        VAR_6 = 0;
      }

      else if( FUNC_12(VAR_9, "utc")==0 ){
        sqlite3_int64 VAR_11;
        FUNC_2(VAR_5);
        VAR_11 = FUNC_5(VAR_5, VAR_3, &VAR_6);
        if( VAR_6==VAR_0 ){
          VAR_5->iJD -= VAR_11;
          FUNC_1(VAR_5);
          VAR_5->iJD += VAR_11 - FUNC_5(VAR_5, VAR_3, &VAR_6);
        }
      }

      break;
    }
    case 'w': {







      if( FUNC_13(VAR_9, "weekday ", 8)==0
               && FUNC_8(&VAR_9[8], &VAR_8, FUNC_11(&VAR_9[8]), VAR_1)
               && (VAR_7=(int)VAR_8)==VAR_8 && VAR_7>=0 && VAR_8<7 ){
        sqlite3_int64 VAR_12;
        FUNC_4(VAR_5);
        VAR_5->validTZ = 0;
        VAR_5->validJD = 0;
        FUNC_2(VAR_5);
        VAR_12 = ((VAR_5->iJD + 129600000)/86400000) % 7;
        if( VAR_12>VAR_7 ) VAR_12 -= 7;
        VAR_5->iJD += (VAR_7 - VAR_12)*86400000;
        FUNC_1(VAR_5);
        VAR_6 = 0;
      }
      break;
    }
    case 's': {






      if( FUNC_13(VAR_9, "start of ", 9)!=0 ) break;
      VAR_9 += 9;
      FUNC_3(VAR_5);
      VAR_5->validHMS = 1;
      VAR_5->h = VAR_5->m = 0;
      VAR_5->s = 0.0;
      VAR_5->validTZ = 0;
      VAR_5->validJD = 0;
      if( FUNC_12(VAR_9,"month")==0 ){
        VAR_5->D = 1;
        VAR_6 = 0;
      }else if( FUNC_12(VAR_9,"year")==0 ){
        FUNC_3(VAR_5);
        VAR_5->M = 1;
        VAR_5->D = 1;
        VAR_6 = 0;
      }else if( FUNC_12(VAR_9,"day")==0 ){
        VAR_6 = 0;
      }
      break;
    }
    case '+':
    case '-':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9': {
      double VAR_13;
      for(VAR_7=1; VAR_9[VAR_7] && VAR_9[VAR_7]!=':' && !FUNC_10(VAR_9[VAR_7]); VAR_7++){}
      if( !FUNC_8(VAR_9, &VAR_8, VAR_7, VAR_1) ){
        VAR_6 = 1;
        break;
      }
      if( VAR_9[VAR_7]==':' ){





        const char *VAR_14 = VAR_9;
        DateTime VAR_15;
        sqlite3_int64 VAR_16;
        if( !FUNC_9(*VAR_14) ) VAR_14++;
        FUNC_6(&VAR_15, 0, sizeof(VAR_15));
        if( FUNC_7(VAR_14, &VAR_15) ) break;
        FUNC_2(&VAR_15);
        VAR_15.iJD -= 43200000;
        VAR_16 = VAR_15.iJD/86400000;
        VAR_15.iJD -= VAR_16*86400000;
        if( VAR_9[0]=='-' ) VAR_15.iJD = -VAR_15.iJD;
        FUNC_2(VAR_5);
        FUNC_1(VAR_5);
        VAR_5->iJD += VAR_15.iJD;
        VAR_6 = 0;
        break;
      }
      VAR_9 += VAR_7;
      while( FUNC_10(*VAR_9) ) VAR_9++;
      VAR_7 = FUNC_11(VAR_9);
      if( VAR_7>10 || VAR_7<3 ) break;
      if( VAR_9[VAR_7-1]=='s' ){ VAR_9[VAR_7-1] = 0; VAR_7--; }
      FUNC_2(VAR_5);
      VAR_6 = 0;
      VAR_13 = VAR_8<0 ? -0.5 : +0.5;
      if( VAR_7==3 && FUNC_12(VAR_9,"day")==0 ){
        VAR_5->iJD += (sqlite3_int64)(VAR_8*86400000.0 + VAR_13);
      }else if( VAR_7==4 && FUNC_12(VAR_9,"hour")==0 ){
        VAR_5->iJD += (sqlite3_int64)(VAR_8*(86400000.0/24.0) + VAR_13);
      }else if( VAR_7==6 && FUNC_12(VAR_9,"minute")==0 ){
        VAR_5->iJD += (sqlite3_int64)(VAR_8*(86400000.0/(24.0*60.0)) + VAR_13);
      }else if( VAR_7==6 && FUNC_12(VAR_9,"second")==0 ){
        VAR_5->iJD += (sqlite3_int64)(VAR_8*(86400000.0/(24.0*60.0*60.0)) + VAR_13);
      }else if( VAR_7==5 && FUNC_12(VAR_9,"month")==0 ){
        int VAR_17, VAR_18;
        FUNC_4(VAR_5);
        VAR_5->M += (int)VAR_8;
        VAR_17 = VAR_5->M>0 ? (VAR_5->M-1)/12 : (VAR_5->M-12)/12;
        VAR_5->Y += VAR_17;
        VAR_5->M -= VAR_17*12;
        VAR_5->validJD = 0;
        FUNC_2(VAR_5);
        VAR_18 = (int)VAR_8;
        if( VAR_18!=VAR_8 ){
          VAR_5->iJD += (sqlite3_int64)((VAR_8 - VAR_18)*30.0*86400000.0 + VAR_13);
        }
      }else if( VAR_7==4 && FUNC_12(VAR_9,"year")==0 ){
        int VAR_19 = (int)VAR_8;
        FUNC_4(VAR_5);
        VAR_5->Y += VAR_19;
        VAR_5->validJD = 0;
        FUNC_2(VAR_5);
        if( VAR_19!=VAR_8 ){
          VAR_5->iJD += (sqlite3_int64)((VAR_8 - VAR_19)*365.0*86400000.0 + VAR_13);
        }
      }else{
        VAR_6 = 1;
      }
      FUNC_1(VAR_5);
      break;
    }
    default: {
      break;
    }
  }
  return VAR_6;
}
