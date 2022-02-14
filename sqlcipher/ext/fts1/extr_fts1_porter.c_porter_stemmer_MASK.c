
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zReverse ;


 int FUNC_0 (char const*,int,char*,int*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char**,char*,char*,scalar_t__ (*) (char*)) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(const char *VAR_0, int VAR_1, char *VAR_2, int *VAR_3){
  int VAR_4, VAR_5, VAR_6;
  char VAR_7[28];
  char *VAR_8, *VAR_9;
  if( VAR_1<3 || VAR_1>=sizeof(VAR_7)-7 ){


    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
    return;
  }
  for(VAR_4=0, VAR_5=sizeof(VAR_7)-6; VAR_4<VAR_1; VAR_4++, VAR_5--){
    VAR_6 = VAR_0[VAR_4];
    if( VAR_6>='A' && VAR_6<='Z' ){
      VAR_7[VAR_5] = VAR_6 + 'a' - 'A';
    }else if( VAR_6>='a' && VAR_6<='z' ){
      VAR_7[VAR_5] = VAR_6;
    }else{


      FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
      return;
    }
  }
  FUNC_6(&VAR_7[sizeof(VAR_7)-5], 0, 5);
  VAR_8 = &VAR_7[VAR_5+1];



  if( VAR_8[0]=='s' ){
    if(
     !FUNC_8(&VAR_8, "sess", "ss", 0) &&
     !FUNC_8(&VAR_8, "sei", "i", 0) &&
     !FUNC_8(&VAR_8, "ss", "ss", 0)
    ){
      VAR_8++;
    }
  }


  VAR_9 = VAR_8;
  if( FUNC_8(&VAR_8, "dee", "ee", FUNC_4) ){

  }else if(
     (FUNC_8(&VAR_8, "gni", "", FUNC_2) || FUNC_8(&VAR_8, "de", "", FUNC_2))
      && VAR_8!=VAR_9
  ){
     if( FUNC_8(&VAR_8, "ta", "ate", 0) ||
         FUNC_8(&VAR_8, "lb", "ble", 0) ||
         FUNC_8(&VAR_8, "zi", "ize", 0) ){

     }else if( FUNC_1(VAR_8) && (*VAR_8!='l' && *VAR_8!='s' && *VAR_8!='z') ){
       VAR_8++;
     }else if( FUNC_3(VAR_8) && FUNC_7(VAR_8) ){
       *(--VAR_8) = 'e';
     }
  }


  if( VAR_8[0]=='y' && FUNC_2(VAR_8+1) ){
    VAR_8[0] = 'i';
  }


  switch( VAR_8[1] ){
   case 'a':
     FUNC_8(&VAR_8, "lanoita", "ate", FUNC_4) ||
     FUNC_8(&VAR_8, "lanoit", "tion", FUNC_4);
     break;
   case 'c':
     FUNC_8(&VAR_8, "icne", "ence", FUNC_4) ||
     FUNC_8(&VAR_8, "icna", "ance", FUNC_4);
     break;
   case 'e':
     FUNC_8(&VAR_8, "rezi", "ize", FUNC_4);
     break;
   case 'g':
     FUNC_8(&VAR_8, "igol", "log", FUNC_4);
     break;
   case 'l':
     FUNC_8(&VAR_8, "ilb", "ble", FUNC_4) ||
     FUNC_8(&VAR_8, "illa", "al", FUNC_4) ||
     FUNC_8(&VAR_8, "iltne", "ent", FUNC_4) ||
     FUNC_8(&VAR_8, "ile", "e", FUNC_4) ||
     FUNC_8(&VAR_8, "ilsuo", "ous", FUNC_4);
     break;
   case 'o':
     FUNC_8(&VAR_8, "noitazi", "ize", FUNC_4) ||
     FUNC_8(&VAR_8, "noita", "ate", FUNC_4) ||
     FUNC_8(&VAR_8, "rota", "ate", FUNC_4);
     break;
   case 's':
     FUNC_8(&VAR_8, "msila", "al", FUNC_4) ||
     FUNC_8(&VAR_8, "ssenevi", "ive", FUNC_4) ||
     FUNC_8(&VAR_8, "ssenluf", "ful", FUNC_4) ||
     FUNC_8(&VAR_8, "ssensuo", "ous", FUNC_4);
     break;
   case 't':
     FUNC_8(&VAR_8, "itila", "al", FUNC_4) ||
     FUNC_8(&VAR_8, "itivi", "ive", FUNC_4) ||
     FUNC_8(&VAR_8, "itilib", "ble", FUNC_4);
     break;
  }


  switch( VAR_8[0] ){
   case 'e':
     FUNC_8(&VAR_8, "etaci", "ic", FUNC_4) ||
     FUNC_8(&VAR_8, "evita", "", FUNC_4) ||
     FUNC_8(&VAR_8, "ezila", "al", FUNC_4);
     break;
   case 'i':
     FUNC_8(&VAR_8, "itici", "ic", FUNC_4);
     break;
   case 'l':
     FUNC_8(&VAR_8, "laci", "ic", FUNC_4) ||
     FUNC_8(&VAR_8, "luf", "", FUNC_4);
     break;
   case 's':
     FUNC_8(&VAR_8, "ssen", "", FUNC_4);
     break;
  }


  switch( VAR_8[1] ){
   case 'a':
     if( VAR_8[0]=='l' && FUNC_5(VAR_8+2) ){
       VAR_8 += 2;
     }
     break;
   case 'c':
     if( VAR_8[0]=='e' && VAR_8[2]=='n' && (VAR_8[3]=='a' || VAR_8[3]=='e') && FUNC_5(VAR_8+4) ){
       VAR_8 += 4;
     }
     break;
   case 'e':
     if( VAR_8[0]=='r' && FUNC_5(VAR_8+2) ){
       VAR_8 += 2;
     }
     break;
   case 'i':
     if( VAR_8[0]=='c' && FUNC_5(VAR_8+2) ){
       VAR_8 += 2;
     }
     break;
   case 'l':
     if( VAR_8[0]=='e' && VAR_8[2]=='b' && (VAR_8[3]=='a' || VAR_8[3]=='i') && FUNC_5(VAR_8+4) ){
       VAR_8 += 4;
     }
     break;
   case 'n':
     if( VAR_8[0]=='t' ){
       if( VAR_8[2]=='a' ){
         if( FUNC_5(VAR_8+3) ){
           VAR_8 += 3;
         }
       }else if( VAR_8[2]=='e' ){
         FUNC_8(&VAR_8, "tneme", "", FUNC_5) ||
         FUNC_8(&VAR_8, "tnem", "", FUNC_5) ||
         FUNC_8(&VAR_8, "tne", "", FUNC_5);
       }
     }
     break;
   case 'o':
     if( VAR_8[0]=='u' ){
       if( FUNC_5(VAR_8+2) ){
         VAR_8 += 2;
       }
     }else if( VAR_8[3]=='s' || VAR_8[3]=='t' ){
       FUNC_8(&VAR_8, "noi", "", FUNC_5);
     }
     break;
   case 's':
     if( VAR_8[0]=='m' && VAR_8[2]=='i' && FUNC_5(VAR_8+3) ){
       VAR_8 += 3;
     }
     break;
   case 't':
     FUNC_8(&VAR_8, "eta", "", FUNC_5) ||
     FUNC_8(&VAR_8, "iti", "", FUNC_5);
     break;
   case 'u':
     if( VAR_8[0]=='s' && VAR_8[2]=='o' && FUNC_5(VAR_8+3) ){
       VAR_8 += 3;
     }
     break;
   case 'v':
   case 'z':
     if( VAR_8[0]=='e' && VAR_8[2]=='i' && FUNC_5(VAR_8+3) ){
       VAR_8 += 3;
     }
     break;
  }


  if( VAR_8[0]=='e' ){
    if( FUNC_5(VAR_8+1) ){
      VAR_8++;
    }else if( FUNC_3(VAR_8+1) && !FUNC_7(VAR_8+1) ){
      VAR_8++;
    }
  }


  if( FUNC_5(VAR_8) && VAR_8[0]=='l' && VAR_8[1]=='l' ){
    VAR_8++;
  }




  *VAR_3 = VAR_4 = FUNC_9(VAR_8);
  VAR_2[VAR_4] = 0;
  while( *VAR_8 ){
    VAR_2[--VAR_4] = *(VAR_8++);
  }
}
