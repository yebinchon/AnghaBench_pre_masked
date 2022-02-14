
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xmlChar ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__* FUNC_3 (scalar_t__*,int*) ;
 int FUNC_4 (scalar_t__ const*,scalar_t__) ;
 scalar_t__* FUNC_5 (scalar_t__ const*) ;
 int FUNC_6 (scalar_t__ const*) ;
 int FUNC_7 (char*) ;

xmlChar *
FUNC_8(const xmlChar *VAR_0, const xmlChar *VAR_1) {
    xmlChar *VAR_2, VAR_3;
    xmlChar *VAR_4;
    const xmlChar *VAR_5;
    int VAR_6, VAR_7;

    if (VAR_0 == ((void*)0))
 return(((void*)0));
    if (VAR_0[0] == 0)
 return(FUNC_5(VAR_0));
    VAR_6 = FUNC_6(VAR_0);
    if (!(VAR_6 > 0)) return(((void*)0));

    VAR_6 += 20;
    VAR_2 = (xmlChar *) FUNC_2(VAR_6);
    if (VAR_2 == ((void*)0)) {
        FUNC_7("escaping URI value\n");
 return(((void*)0));
    }
    VAR_5 = (const xmlChar *) VAR_0;
    VAR_7 = 0;
    while(*VAR_5 != 0) {
 if (VAR_6 - VAR_7 <= 3) {
            VAR_4 = FUNC_3(VAR_2, &VAR_6);
     if (VAR_4 == ((void*)0)) {
                FUNC_7("escaping URI value\n");
  FUNC_1(VAR_2);
  return(((void*)0));
     }
     VAR_2 = VAR_4;
 }

 VAR_3 = *VAR_5;

 if ((VAR_3 != '@') && (!FUNC_0(VAR_3)) && (!FUNC_4(VAR_1, VAR_3))) {
     unsigned char VAR_8;
     VAR_2[VAR_7++] = '%';
     VAR_8 = VAR_3 >> 4;
     if (VAR_8 <= 9)
  VAR_2[VAR_7++] = '0' + VAR_8;
     else
  VAR_2[VAR_7++] = 'A' + VAR_8 - 0xA;
     VAR_8 = VAR_3 & 0xF;
     if (VAR_8 <= 9)
  VAR_2[VAR_7++] = '0' + VAR_8;
     else
  VAR_2[VAR_7++] = 'A' + VAR_8 - 0xA;
     VAR_5++;
 } else {
     VAR_2[VAR_7++] = *VAR_5++;
 }

    }
    VAR_2[VAR_7] = 0;
    return(VAR_2);
}
