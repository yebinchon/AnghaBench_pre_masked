
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstate {char* tokenstart; int tokenlineno; scalar_t__ errorcnt; int firstrule; int filename; int state; struct lemon* gp; } ;
struct lemon {scalar_t__ errorcnt; int rule; int filename; } ;
typedef int ps ;
typedef int FILE ;


 int FUNC_0 (int ,int,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,char*) ;
 unsigned int FUNC_6 (char*,int,unsigned int,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int ,int) ;
 unsigned int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (unsigned int) ;
 int FUNC_11 (struct pstate*,char,int) ;
 int FUNC_12 (struct pstate*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *) ;

void FUNC_15(struct lemon *VAR_1)
{
  struct pstate VAR_2;
  FILE *VAR_3;
  char *VAR_4;
  unsigned int VAR_5;
  int VAR_6;
  int VAR_7;
  char *VAR_8, *VAR_9;
  int VAR_10 = 0;

  FUNC_11(&VAR_2, '\0', sizeof(VAR_2));
  VAR_2.gp = VAR_1;
  VAR_2.filename = VAR_1->filename;
  VAR_2.errorcnt = 0;
  VAR_2.state = VAR_0;


  VAR_3 = FUNC_5(VAR_2.filename,"rb");
  if( VAR_3==0 ){
    FUNC_0(VAR_2.filename,0,"Can't open this file for reading.");
    VAR_1->errorcnt++;
    return;
  }
  FUNC_8(VAR_3,0,2);
  VAR_5 = FUNC_9(VAR_3);
  FUNC_14(VAR_3);
  VAR_4 = (char *)FUNC_10( VAR_5+1 );
  if( VAR_5>100000000 || VAR_4==0 ){
    FUNC_0(VAR_2.filename,0,"Input file too large.");
    FUNC_7(VAR_4);
    VAR_1->errorcnt++;
    FUNC_4(VAR_3);
    return;
  }
  if( FUNC_6(VAR_4,1,VAR_5,VAR_3)!=VAR_5 ){
    FUNC_0(VAR_2.filename,0,"Can't read in all %d bytes of this file.",
      VAR_5);
    FUNC_7(VAR_4);
    VAR_1->errorcnt++;
    FUNC_4(VAR_3);
    return;
  }
  FUNC_4(VAR_3);
  VAR_4[VAR_5] = 0;


  FUNC_13(VAR_4);


  VAR_6 = 1;
  for(VAR_8=VAR_4; (VAR_7= *VAR_8)!=0; ){
    if( VAR_7=='\n' ) VAR_6++;
    if( FUNC_3(VAR_7) ){ VAR_8++; continue; }
    if( VAR_7=='/' && VAR_8[1]=='/' ){
      VAR_8+=2;
      while( (VAR_7= *VAR_8)!=0 && VAR_7!='\n' ) VAR_8++;
      continue;
    }
    if( VAR_7=='/' && VAR_8[1]=='*' ){
      VAR_8+=2;
      while( (VAR_7= *VAR_8)!=0 && (VAR_7!='/' || VAR_8[-1]!='*') ){
        if( VAR_7=='\n' ) VAR_6++;
        VAR_8++;
      }
      if( VAR_7 ) VAR_8++;
      continue;
    }
    VAR_2.tokenstart = VAR_8;
    VAR_2.tokenlineno = VAR_6;
    if( VAR_7=='\"' ){
      VAR_8++;
      while( (VAR_7= *VAR_8)!=0 && VAR_7!='\"' ){
        if( VAR_7=='\n' ) VAR_6++;
        VAR_8++;
      }
      if( VAR_7==0 ){
        FUNC_0(VAR_2.filename,VAR_10,
"String starting on this line is not terminated before the end of the file.");
        VAR_2.errorcnt++;
        VAR_9 = VAR_8;
      }else{
        VAR_9 = VAR_8+1;
      }
    }else if( VAR_7=='{' ){
      int VAR_11;
      VAR_8++;
      for(VAR_11=1; (VAR_7= *VAR_8)!=0 && (VAR_11>1 || VAR_7!='}'); VAR_8++){
        if( VAR_7=='\n' ) VAR_6++;
        else if( VAR_7=='{' ) VAR_11++;
        else if( VAR_7=='}' ) VAR_11--;
        else if( VAR_7=='/' && VAR_8[1]=='*' ){
          int VAR_12;
          VAR_8 = &VAR_8[2];
          VAR_12 = 0;
          while( (VAR_7= *VAR_8)!=0 && (VAR_7!='/' || VAR_12!='*') ){
            if( VAR_7=='\n' ) VAR_6++;
            VAR_12 = VAR_7;
            VAR_8++;
          }
        }else if( VAR_7=='/' && VAR_8[1]=='/' ){
          VAR_8 = &VAR_8[2];
          while( (VAR_7= *VAR_8)!=0 && VAR_7!='\n' ) VAR_8++;
          if( VAR_7 ) VAR_6++;
        }else if( VAR_7=='\'' || VAR_7=='\"' ){
          int VAR_13, VAR_14;
          VAR_13 = VAR_7;
          VAR_14 = 0;
          for(VAR_8++; (VAR_7= *VAR_8)!=0 && (VAR_7!=VAR_13 || VAR_14=='\\'); VAR_8++){
            if( VAR_7=='\n' ) VAR_6++;
            if( VAR_14=='\\' ) VAR_14 = 0;
            else VAR_14 = VAR_7;
          }
        }
      }
      if( VAR_7==0 ){
        FUNC_0(VAR_2.filename,VAR_2.tokenlineno,
"C code starting on this line is not terminated before the end of the file.");
        VAR_2.errorcnt++;
        VAR_9 = VAR_8;
      }else{
        VAR_9 = VAR_8+1;
      }
    }else if( FUNC_1(VAR_7) ){
      while( (VAR_7= *VAR_8)!=0 && (FUNC_1(VAR_7) || VAR_7=='_') ) VAR_8++;
      VAR_9 = VAR_8;
    }else if( VAR_7==':' && VAR_8[1]==':' && VAR_8[2]=='=' ){
      VAR_8 += 3;
      VAR_9 = VAR_8;
    }else if( (VAR_7=='/' || VAR_7=='|') && FUNC_2(VAR_8[1]) ){
      VAR_8 += 2;
      while( (VAR_7 = *VAR_8)!=0 && (FUNC_1(VAR_7) || VAR_7=='_') ) VAR_8++;
      VAR_9 = VAR_8;
    }else{
      VAR_8++;
      VAR_9 = VAR_8;
    }
    VAR_7 = *VAR_8;
    *VAR_8 = 0;
    FUNC_12(&VAR_2);
    *VAR_8 = (char)VAR_7;
    VAR_8 = VAR_9;
  }
  FUNC_7(VAR_4);
  VAR_1->rule = VAR_2.firstrule;
  VAR_1->errorcnt = VAR_2.errorcnt;
}
