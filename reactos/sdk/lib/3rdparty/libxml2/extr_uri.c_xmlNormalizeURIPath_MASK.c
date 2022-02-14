
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(char *VAR_0) {
    char *VAR_1, *VAR_2;

    if (VAR_0 == ((void*)0))
 return(-1);




    VAR_1 = VAR_0;
    while (VAR_1[0] == '/')
      ++VAR_1;
    if (VAR_1[0] == '\0')
      return(0);


    VAR_2 = VAR_1;




    while (VAR_1[0] != '\0') {




 if ((VAR_1[0] == '.') && (VAR_1[1] == '/')) {
     VAR_1 += 2;

     while (VAR_1[0] == '/')
  VAR_1++;
     continue;
 }





 if ((VAR_1[0] == '.') && (VAR_1[1] == '\0'))
     break;


 while (VAR_1[0] != '/') {
            if (VAR_1[0] == '\0')
              goto done_cd;
     (VAR_2++)[0] = (VAR_1++)[0];
 }

 while ((VAR_1[0] == '/') && (VAR_1[1] == '/'))
     VAR_1++;

        (VAR_2++)[0] = (VAR_1++)[0];
    }
 done_cd:
    VAR_2[0] = '\0';


    VAR_1 = VAR_0;
    while (VAR_1[0] == '/')
      ++VAR_1;
    if (VAR_1[0] == '\0')
 return(0);
    while (1) {
        char *VAR_3, *VAR_4;






        VAR_3 = VAR_1;
        while ((VAR_3[0] != '/') && (VAR_3[0] != '\0'))
          ++VAR_3;




        if (VAR_3[0] == '\0')
          break;




        ++VAR_3;
        if (((VAR_1[0] == '.') && (VAR_1[1] == '.') && (VAR_3 == VAR_1+3))
            || ((VAR_3[0] != '.') || (VAR_3[1] != '.')
                || ((VAR_3[2] != '/') && (VAR_3[2] != '\0')))) {
          VAR_1 = VAR_3;
          continue;
        }
        if (VAR_3[2] == '\0') {
          VAR_1[0] = '\0';
          break;
        }


        VAR_4 = VAR_1;
        VAR_3 += 3;
        while ((*VAR_4++ = *VAR_3++) != 0)
          ;


        VAR_3 = VAR_1;
        while ((VAR_3 > VAR_0) && ((--VAR_3)[0] == '/'))
          ;
        if (VAR_3 == VAR_0)
          continue;
        VAR_1 = VAR_3;
        while ((VAR_1 > VAR_0) && (VAR_1[-1] != '/'))
          --VAR_1;
    }
    VAR_2[0] = '\0';
    if (VAR_0[0] == '/') {
      VAR_1 = VAR_0;
      while ((VAR_1[0] == '/') && (VAR_1[1] == '.') && (VAR_1[2] == '.')
             && ((VAR_1[3] == '/') || (VAR_1[3] == '\0')))
 VAR_1 += 3;

      if (VAR_1 != VAR_0) {
 VAR_2 = VAR_0;
 while (VAR_1[0] != '\0')
          (VAR_2++)[0] = (VAR_1++)[0];
 VAR_2[0] = 0;
      }
    }

    return(0);
}
