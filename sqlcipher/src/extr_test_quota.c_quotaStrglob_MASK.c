
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, const char *VAR_1){
  int VAR_2, VAR_3, VAR_4;
  int VAR_5;
  int VAR_6;

  while( (VAR_2 = (*(VAR_0++)))!=0 ){
    if( VAR_2=='*' ){
      while( (VAR_2=(*(VAR_0++))) == '*' || VAR_2=='?' ){
        if( VAR_2=='?' && (*(VAR_1++))==0 ) return 0;
      }
      if( VAR_2==0 ){
        return 1;
      }else if( VAR_2=='[' ){
        while( *VAR_1 && FUNC_0(VAR_0-1,VAR_1)==0 ){
          VAR_1++;
        }
        return (*VAR_1)!=0;
      }
      VAR_4 = (VAR_2=='/') ? '\\' : VAR_2;
      while( (VAR_3 = (*(VAR_1++)))!=0 ){
        while( VAR_3!=VAR_2 && VAR_3!=VAR_4 ){
          VAR_3 = *(VAR_1++);
          if( VAR_3==0 ) return 0;
        }
        if( FUNC_0(VAR_0,VAR_1) ) return 1;
      }
      return 0;
    }else if( VAR_2=='?' ){
      if( (*(VAR_1++))==0 ) return 0;
    }else if( VAR_2=='[' ){
      int VAR_7 = 0;
      VAR_6 = 0;
      VAR_5 = 0;
      VAR_2 = *(VAR_1++);
      if( VAR_2==0 ) return 0;
      VAR_3 = *(VAR_0++);
      if( VAR_3=='^' ){
        VAR_5 = 1;
        VAR_3 = *(VAR_0++);
      }
      if( VAR_3==']' ){
        if( VAR_2==']' ) VAR_6 = 1;
        VAR_3 = *(VAR_0++);
      }
      while( VAR_3 && VAR_3!=']' ){
        if( VAR_3=='-' && VAR_0[0]!=']' && VAR_0[0]!=0 && VAR_7>0 ){
          VAR_3 = *(VAR_0++);
          if( VAR_2>=VAR_7 && VAR_2<=VAR_3 ) VAR_6 = 1;
          VAR_7 = 0;
        }else{
          if( VAR_2==VAR_3 ){
            VAR_6 = 1;
          }
          VAR_7 = VAR_3;
        }
        VAR_3 = *(VAR_0++);
      }
      if( VAR_3==0 || (VAR_6 ^ VAR_5)==0 ) return 0;
    }else if( VAR_2=='/' ){
      if( VAR_1[0]!='/' && VAR_1[0]!='\\' ) return 0;
      VAR_1++;
    }else{
      if( VAR_2!=(*(VAR_1++)) ) return 0;
    }
  }
  return *VAR_1==0;
}
