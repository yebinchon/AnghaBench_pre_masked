
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int szSorterRef; } ;
struct TYPE_4__ {int szEst; int colFlags; } ;
typedef TYPE_1__ Column ;


 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int*) ;
 TYPE_2__ VAR_6 ;
 scalar_t__ FUNC_2 (char const) ;
 int* VAR_7 ;

char FUNC_3(const char *VAR_8, Column *VAR_9){
  u32 VAR_10 = 0;
  char VAR_11 = VAR_3;
  const char *VAR_12 = 0;

  FUNC_0( VAR_8!=0 );
  while( VAR_8[0] ){
    VAR_10 = (VAR_10<<8) + VAR_7[(*VAR_8)&0xff];
    VAR_8++;
    if( VAR_10==(('c'<<24)+('h'<<16)+('a'<<8)+'r') ){
      VAR_11 = VAR_5;
      VAR_12 = VAR_8;
    }else if( VAR_10==(('c'<<24)+('l'<<16)+('o'<<8)+'b') ){
      VAR_11 = VAR_5;
    }else if( VAR_10==(('t'<<24)+('e'<<16)+('x'<<8)+'t') ){
      VAR_11 = VAR_5;
    }else if( VAR_10==(('b'<<24)+('l'<<16)+('o'<<8)+'b')
        && (VAR_11==VAR_3 || VAR_11==VAR_4) ){
      VAR_11 = VAR_1;
      if( VAR_8[0]=='(' ) VAR_12 = VAR_8;

    }else if( VAR_10==(('r'<<24)+('e'<<16)+('a'<<8)+'l')
        && VAR_11==VAR_3 ){
      VAR_11 = VAR_4;
    }else if( VAR_10==(('f'<<24)+('l'<<16)+('o'<<8)+'a')
        && VAR_11==VAR_3 ){
      VAR_11 = VAR_4;
    }else if( VAR_10==(('d'<<24)+('o'<<16)+('u'<<8)+'b')
        && VAR_11==VAR_3 ){
      VAR_11 = VAR_4;

    }else if( (VAR_10&0x00FFFFFF)==(('i'<<16)+('n'<<8)+'t') ){
      VAR_11 = VAR_2;
      break;
    }
  }



  if( VAR_9 ){
    int VAR_13 = 0;
    if( VAR_11<VAR_3 ){
      if( VAR_12 ){
        while( VAR_12[0] ){
          if( FUNC_2(VAR_12[0]) ){

            FUNC_1(VAR_12, &VAR_13);
            break;
          }
          VAR_12++;
        }
      }else{
        VAR_13 = 16;
      }
    }





    VAR_13 = VAR_13/4 + 1;
    if( VAR_13>255 ) VAR_13 = 255;
    VAR_9->szEst = VAR_13;
  }
  return VAR_11;
}
