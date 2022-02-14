
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
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(const char *VAR_0, int VAR_1, char *VAR_2, int *VAR_3){
  int VAR_4, VAR_5;
  char VAR_6[28];
  char *VAR_7, *VAR_8;
  if( VAR_1<3 || VAR_1>=(int)sizeof(VAR_6)-7 ){


    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
    return;
  }
  for(VAR_4=0, VAR_5=sizeof(VAR_6)-6; VAR_4<VAR_1; VAR_4++, VAR_5--){
    char VAR_9 = VAR_0[VAR_4];
    if( VAR_9>='A' && VAR_9<='Z' ){
      VAR_6[VAR_5] = VAR_9 + 'a' - 'A';
    }else if( VAR_9>='a' && VAR_9<='z' ){
      VAR_6[VAR_5] = VAR_9;
    }else{


      FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
      return;
    }
  }
  FUNC_6(&VAR_6[sizeof(VAR_6)-5], 0, 5);
  VAR_7 = &VAR_6[VAR_5+1];



  if( VAR_7[0]=='s' ){
    if(
     !FUNC_8(&VAR_7, "sess", "ss", 0) &&
     !FUNC_8(&VAR_7, "sei", "i", 0) &&
     !FUNC_8(&VAR_7, "ss", "ss", 0)
    ){
      VAR_7++;
    }
  }


  VAR_8 = VAR_7;
  if( FUNC_8(&VAR_7, "dee", "ee", FUNC_4) ){

  }else if(
     (FUNC_8(&VAR_7, "gni", "", FUNC_2) || FUNC_8(&VAR_7, "de", "", FUNC_2))
      && VAR_7!=VAR_8
  ){
     if( FUNC_8(&VAR_7, "ta", "ate", 0) ||
         FUNC_8(&VAR_7, "lb", "ble", 0) ||
         FUNC_8(&VAR_7, "zi", "ize", 0) ){

     }else if( FUNC_1(VAR_7) && (*VAR_7!='l' && *VAR_7!='s' && *VAR_7!='z') ){
       VAR_7++;
     }else if( FUNC_3(VAR_7) && FUNC_7(VAR_7) ){
       *(--VAR_7) = 'e';
     }
  }


  if( VAR_7[0]=='y' && FUNC_2(VAR_7+1) ){
    VAR_7[0] = 'i';
  }


  switch( VAR_7[1] ){
   case 'a':
     if( !FUNC_8(&VAR_7, "lanoita", "ate", FUNC_4) ){
       FUNC_8(&VAR_7, "lanoit", "tion", FUNC_4);
     }
     break;
   case 'c':
     if( !FUNC_8(&VAR_7, "icne", "ence", FUNC_4) ){
       FUNC_8(&VAR_7, "icna", "ance", FUNC_4);
     }
     break;
   case 'e':
     FUNC_8(&VAR_7, "rezi", "ize", FUNC_4);
     break;
   case 'g':
     FUNC_8(&VAR_7, "igol", "log", FUNC_4);
     break;
   case 'l':
     if( !FUNC_8(&VAR_7, "ilb", "ble", FUNC_4)
      && !FUNC_8(&VAR_7, "illa", "al", FUNC_4)
      && !FUNC_8(&VAR_7, "iltne", "ent", FUNC_4)
      && !FUNC_8(&VAR_7, "ile", "e", FUNC_4)
     ){
       FUNC_8(&VAR_7, "ilsuo", "ous", FUNC_4);
     }
     break;
   case 'o':
     if( !FUNC_8(&VAR_7, "noitazi", "ize", FUNC_4)
      && !FUNC_8(&VAR_7, "noita", "ate", FUNC_4)
     ){
       FUNC_8(&VAR_7, "rota", "ate", FUNC_4);
     }
     break;
   case 's':
     if( !FUNC_8(&VAR_7, "msila", "al", FUNC_4)
      && !FUNC_8(&VAR_7, "ssenevi", "ive", FUNC_4)
      && !FUNC_8(&VAR_7, "ssenluf", "ful", FUNC_4)
     ){
       FUNC_8(&VAR_7, "ssensuo", "ous", FUNC_4);
     }
     break;
   case 't':
     if( !FUNC_8(&VAR_7, "itila", "al", FUNC_4)
      && !FUNC_8(&VAR_7, "itivi", "ive", FUNC_4)
     ){
       FUNC_8(&VAR_7, "itilib", "ble", FUNC_4);
     }
     break;
  }


  switch( VAR_7[0] ){
   case 'e':
     if( !FUNC_8(&VAR_7, "etaci", "ic", FUNC_4)
      && !FUNC_8(&VAR_7, "evita", "", FUNC_4)
     ){
       FUNC_8(&VAR_7, "ezila", "al", FUNC_4);
     }
     break;
   case 'i':
     FUNC_8(&VAR_7, "itici", "ic", FUNC_4);
     break;
   case 'l':
     if( !FUNC_8(&VAR_7, "laci", "ic", FUNC_4) ){
       FUNC_8(&VAR_7, "luf", "", FUNC_4);
     }
     break;
   case 's':
     FUNC_8(&VAR_7, "ssen", "", FUNC_4);
     break;
  }


  switch( VAR_7[1] ){
   case 'a':
     if( VAR_7[0]=='l' && FUNC_5(VAR_7+2) ){
       VAR_7 += 2;
     }
     break;
   case 'c':
     if( VAR_7[0]=='e' && VAR_7[2]=='n' && (VAR_7[3]=='a' || VAR_7[3]=='e') && FUNC_5(VAR_7+4) ){
       VAR_7 += 4;
     }
     break;
   case 'e':
     if( VAR_7[0]=='r' && FUNC_5(VAR_7+2) ){
       VAR_7 += 2;
     }
     break;
   case 'i':
     if( VAR_7[0]=='c' && FUNC_5(VAR_7+2) ){
       VAR_7 += 2;
     }
     break;
   case 'l':
     if( VAR_7[0]=='e' && VAR_7[2]=='b' && (VAR_7[3]=='a' || VAR_7[3]=='i') && FUNC_5(VAR_7+4) ){
       VAR_7 += 4;
     }
     break;
   case 'n':
     if( VAR_7[0]=='t' ){
       if( VAR_7[2]=='a' ){
         if( FUNC_5(VAR_7+3) ){
           VAR_7 += 3;
         }
       }else if( VAR_7[2]=='e' ){
         if( !FUNC_8(&VAR_7, "tneme", "", FUNC_5)
          && !FUNC_8(&VAR_7, "tnem", "", FUNC_5)
         ){
           FUNC_8(&VAR_7, "tne", "", FUNC_5);
         }
       }
     }
     break;
   case 'o':
     if( VAR_7[0]=='u' ){
       if( FUNC_5(VAR_7+2) ){
         VAR_7 += 2;
       }
     }else if( VAR_7[3]=='s' || VAR_7[3]=='t' ){
       FUNC_8(&VAR_7, "noi", "", FUNC_5);
     }
     break;
   case 's':
     if( VAR_7[0]=='m' && VAR_7[2]=='i' && FUNC_5(VAR_7+3) ){
       VAR_7 += 3;
     }
     break;
   case 't':
     if( !FUNC_8(&VAR_7, "eta", "", FUNC_5) ){
       FUNC_8(&VAR_7, "iti", "", FUNC_5);
     }
     break;
   case 'u':
     if( VAR_7[0]=='s' && VAR_7[2]=='o' && FUNC_5(VAR_7+3) ){
       VAR_7 += 3;
     }
     break;
   case 'v':
   case 'z':
     if( VAR_7[0]=='e' && VAR_7[2]=='i' && FUNC_5(VAR_7+3) ){
       VAR_7 += 3;
     }
     break;
  }


  if( VAR_7[0]=='e' ){
    if( FUNC_5(VAR_7+1) ){
      VAR_7++;
    }else if( FUNC_3(VAR_7+1) && !FUNC_7(VAR_7+1) ){
      VAR_7++;
    }
  }


  if( FUNC_5(VAR_7) && VAR_7[0]=='l' && VAR_7[1]=='l' ){
    VAR_7++;
  }




  *VAR_3 = VAR_4 = (int)FUNC_9(VAR_7);
  VAR_2[VAR_4] = 0;
  while( *VAR_7 ){
    VAR_2[--VAR_4] = *(VAR_7++);
  }
}
