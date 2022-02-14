
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int* VAR_30 ;
 int FUNC_1 (unsigned char const) ;
 int FUNC_2 (unsigned char const) ;
 int FUNC_3 (unsigned char const) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const unsigned char *VAR_31, int *VAR_32){
  int VAR_33, VAR_34;
  switch( VAR_30[*VAR_31] ){


    case 133: {
      for(VAR_33=1; FUNC_2(VAR_31[VAR_33]); VAR_33++){}
      *VAR_32 = VAR_26;
      return VAR_33;
    }
    case 142: {
      if( VAR_31[1]=='-' ){
        for(VAR_33=2; (VAR_34=VAR_31[VAR_33])!=0 && VAR_34!='\n'; VAR_33++){}
        *VAR_32 = VAR_26;
        return VAR_33;
      }
      *VAR_32 = VAR_18;
      return 1;
    }
    case 144: {
      *VAR_32 = VAR_15;
      return 1;
    }
    case 136: {
      *VAR_32 = VAR_22;
      return 1;
    }
    case 135: {
      *VAR_32 = VAR_24;
      return 1;
    }
    case 139: {
      *VAR_32 = VAR_20;
      return 1;
    }
    case 132: {
      *VAR_32 = VAR_27;
      return 1;
    }
    case 134: {
      if( VAR_31[1]!='*' || VAR_31[2]==0 ){
        *VAR_32 = VAR_25;
        return 1;
      }
      for(VAR_33=3, VAR_34=VAR_31[2]; (VAR_34!='*' || VAR_31[VAR_33]!='/') && (VAR_34=VAR_31[VAR_33])!=0; VAR_33++){}
      if( VAR_34 ) VAR_33++;
      *VAR_32 = VAR_26;
      return VAR_33;
    }
    case 141: {
      *VAR_32 = VAR_21;
      return 1;
    }
    case 148: {
      *VAR_32 = VAR_7;
      return 1 + (VAR_31[1]=='=');
    }
    case 143: {
      if( (VAR_34=VAR_31[1])=='=' ){
        *VAR_32 = VAR_14;
        return 2;
      }else if( VAR_34=='>' ){
        *VAR_32 = VAR_19;
        return 2;
      }else if( VAR_34=='<' ){
        *VAR_32 = VAR_16;
        return 2;
      }else{
        *VAR_32 = VAR_17;
        return 1;
      }
    }
    case 147: {
      if( (VAR_34=VAR_31[1])=='=' ){
        *VAR_32 = VAR_9;
        return 2;
      }else if( VAR_34=='>' ){
        *VAR_32 = VAR_23;
        return 2;
      }else{
        *VAR_32 = VAR_10;
        return 1;
      }
    }
    case 153: {
      if( VAR_31[1]!='=' ){
        *VAR_32 = VAR_12;
        return 1;
      }else{
        *VAR_32 = VAR_19;
        return 2;
      }
    }
    case 140: {
      if( VAR_31[1]!='|' ){
        *VAR_32 = VAR_2;
        return 1;
      }else{
        *VAR_32 = VAR_5;
        return 2;
      }
    }
    case 152: {
      *VAR_32 = VAR_4;
      return 1;
    }
    case 154: {
      *VAR_32 = VAR_0;
      return 1;
    }
    case 131: {
      *VAR_32 = VAR_1;
      return 1;
    }
    case 138: {
      int VAR_35 = VAR_31[0];
      FUNC_4( VAR_35=='`' );
      FUNC_4( VAR_35=='\'' );
      FUNC_4( VAR_35=='"' );
      for(VAR_33=1; (VAR_34=VAR_31[VAR_33])!=0; VAR_33++){
        if( VAR_34==VAR_35 ){
          if( VAR_31[VAR_33+1]==VAR_35 ){
            VAR_33++;
          }else{
            break;
          }
        }
      }
      if( VAR_34=='\'' ){
        *VAR_32 = VAR_28;
        return VAR_33+1;
      }else if( VAR_34!=0 ){
        *VAR_32 = VAR_11;
        return VAR_33+1;
      }else{
        *VAR_32 = VAR_12;
        return VAR_33;
      }
    }
    case 149: {
      if( !FUNC_1(VAR_31[1]) ){
        *VAR_32 = VAR_6;
        return 1;
      }


    }
    case 151: {
      *VAR_32 = VAR_13;
      if( VAR_31[0]=='0' && (VAR_31[1]=='x' || VAR_31[1]=='X') && FUNC_3(VAR_31[2]) ){
        for(VAR_33=3; FUNC_3(VAR_31[VAR_33]); VAR_33++){}
        return VAR_33;
      }
      for(VAR_33=0; FUNC_1(VAR_31[VAR_33]); VAR_33++){}
      if( VAR_31[VAR_33]=='.' ){
        VAR_33++;
        while( FUNC_1(VAR_31[VAR_33]) ){ VAR_33++; }
        *VAR_32 = VAR_8;
      }
      if( (VAR_31[VAR_33]=='e' || VAR_31[VAR_33]=='E') &&
           ( FUNC_1(VAR_31[VAR_33+1])
            || ((VAR_31[VAR_33+1]=='+' || VAR_31[VAR_33+1]=='-') && FUNC_1(VAR_31[VAR_33+2]))
           )
      ){
        VAR_33 += 2;
        while( FUNC_1(VAR_31[VAR_33]) ){ VAR_33++; }
        *VAR_32 = VAR_8;
      }
      while( FUNC_0(VAR_31[VAR_33]) ){
        *VAR_32 = VAR_12;
        VAR_33++;
      }
      return VAR_33;
    }
    case 137: {
      for(VAR_33=1, VAR_34=VAR_31[0]; VAR_34!=']' && (VAR_34=VAR_31[VAR_33])!=0; VAR_33++){}
      *VAR_32 = VAR_34==']' ? VAR_11 : VAR_12;
      return VAR_33;
    }
    case 129: {
      *VAR_32 = VAR_29;
      for(VAR_33=1; FUNC_1(VAR_31[VAR_33]); VAR_33++){}
      return VAR_33;
    }
    case 150:
    case 130: {
      int VAR_36 = 0;
      FUNC_4( VAR_31[0]=='$' ); FUNC_4( VAR_31[0]=='@' );
      FUNC_4( VAR_31[0]==':' ); FUNC_4( VAR_31[0]=='#' );
      *VAR_32 = VAR_29;
      for(VAR_33=1; (VAR_34=VAR_31[VAR_33])!=0; VAR_33++){
        if( FUNC_0(VAR_34) ){
          VAR_36++;
        }else if( VAR_34=='(' && VAR_36>0 ){
          do{
            VAR_33++;
          }while( (VAR_34=VAR_31[VAR_33])!=0 && !FUNC_2(VAR_34) && VAR_34!=')' );
          if( VAR_34==')' ){
            VAR_33++;
          }else{
            *VAR_32 = VAR_12;
          }
          break;
        }else if( VAR_34==':' && VAR_31[VAR_33+1]==':' ){
          VAR_33++;
        }else{
          break;
        }
      }
      if( VAR_36==0 ) *VAR_32 = VAR_12;
      return VAR_33;
    }
    case 145: {
      for(VAR_33=1; VAR_30[VAR_31[VAR_33]]<=145; VAR_33++){}
      if( FUNC_0(VAR_31[VAR_33]) ){



        VAR_33++;
        break;
      }
      *VAR_32 = VAR_11;
      return VAR_33;
    }
    case 128: {
      FUNC_4( VAR_31[0]=='x' ); FUNC_4( VAR_31[0]=='X' );
      if( VAR_31[1]=='\'' ){
        *VAR_32 = VAR_3;
        for(VAR_33=2; FUNC_3(VAR_31[VAR_33]); VAR_33++){}
        if( VAR_31[VAR_33]!='\'' || VAR_33%2 ){
          *VAR_32 = VAR_12;
          while( VAR_31[VAR_33] && VAR_31[VAR_33]!='\'' ){ VAR_33++; }
        }
        if( VAR_31[VAR_33] ) VAR_33++;
        return VAR_33;
      }


    }
    case 146: {
      VAR_33 = 1;
      break;
    }
    default: {
      *VAR_32 = VAR_12;
      return 1;
    }
  }
  while( FUNC_0(VAR_31[VAR_33]) ){ VAR_33++; }
  *VAR_32 = VAR_11;
  return VAR_33;
}
