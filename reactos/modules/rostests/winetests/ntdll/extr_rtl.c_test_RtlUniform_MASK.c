
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGLONG ;
typedef int ULONG ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int,...) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void)
{
    ULONGLONG VAR_1;
    ULONG VAR_2;
    ULONG VAR_3;
    ULONG VAR_4;
    ULONG VAR_5;

    if (!&FUNC_1)
    {
        FUNC_3("RtlUniform is not available\n");
        return;
    }
    VAR_2 = 0;
    VAR_4 = 0x7fffffc3;
    VAR_5 = FUNC_1(&VAR_2);
    FUNC_0(VAR_5 == VAR_4,
        "RtlUniform(&seed (seed == 0)) returns %x, expected %x\n",
        VAR_5, VAR_4);
    VAR_2 = 1;
    VAR_4 = VAR_2 * 0xffffffed + 0x7fffffc3 + 1;
    VAR_5 = FUNC_1(&VAR_2);
    FUNC_0(VAR_5 == VAR_4,
        "RtlUniform(&seed (seed == 1)) returns %x, expected %x\n",
        VAR_5, VAR_4);



    VAR_2 = 2;
    VAR_4 = VAR_2 * 0xffffffed + 0x7fffffc3;
    VAR_5 = FUNC_1(&VAR_2);






    if (VAR_5 == 0x7fffff9f) {
        FUNC_2("Most likely running on Windows Vista which uses a different algorithm\n");
        return;
    }

    FUNC_0(VAR_5 == VAR_4,
        "RtlUniform(&seed (seed == 2)) returns %x, expected %x\n",
        VAR_5, VAR_4);




    VAR_2 = 3;
    VAR_4 = VAR_2 * 0xffffffed + 0x7fffffc3 + (VAR_2 & 1);
    VAR_5 = FUNC_1(&VAR_2);
    FUNC_0(VAR_5 == VAR_4,
        "RtlUniform(&seed (seed == 3)) returns %x, expected %x\n",
        VAR_5, VAR_4);

    VAR_2 = 0x6bca1aa;
    VAR_4 = VAR_2 * 0xffffffed + 0x7fffffc3;
    VAR_5 = FUNC_1(&VAR_2);
    FUNC_0(VAR_5 == VAR_4,
        "RtlUniform(&seed (seed == 0x6bca1aa)) returns %x, expected %x\n",
        VAR_5, VAR_4);

    VAR_2 = 0x6bca1ab;
    VAR_4 = VAR_2 * 0xffffffed + 0x7fffffc3 + 1;
    VAR_5 = FUNC_1(&VAR_2);
    FUNC_0(VAR_5 == VAR_4,
        "RtlUniform(&seed (seed == 0x6bca1ab)) returns %x, expected %x\n",
        VAR_5, VAR_4);



    VAR_2 = 0x6bca1ac;
    VAR_4 = VAR_2 * 0xffffffed + 0x7fffffc3 + 2;
    VAR_5 = FUNC_1(&VAR_2);
    FUNC_0(VAR_5 == VAR_4,
        "RtlUniform(&seed (seed == 0x6bca1ac)) returns %x, expected %x\n",
        VAR_5, VAR_4);






    VAR_2 = 0x6bca1ad;
    VAR_4 = (VAR_2 * 0xffffffed + 0x7fffffc3) & VAR_0;
    VAR_5 = FUNC_1(&VAR_2);
    FUNC_0(VAR_5 == VAR_4,
        "RtlUniform(&seed (seed == 0x6bca1ad)) returns %x, expected %x\n",
        VAR_5, VAR_4);

    VAR_2 = 0x6bca1ae;
    VAR_4 = (VAR_2 * 0xffffffed + 0x7fffffc3 + 1) & VAR_0;
    VAR_5 = FUNC_1(&VAR_2);
    FUNC_0(VAR_5 == VAR_4,
        "RtlUniform(&seed (seed == 0x6bca1ae)) returns %x, expected %x\n",
        VAR_5, VAR_4);
    VAR_2 = 0;
    for (VAR_1 = 0; VAR_1 <= 100000; VAR_1++) {

 VAR_4 = VAR_2 * 0xffffffed + 0x7fffffc3;
 if (VAR_2 < 0x6bca1ac) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 == 0x6bca1ac) {
     VAR_4 = (VAR_4 + 2) & VAR_0;
 } else if (VAR_2 < 0xd79435c) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0x1435e50b) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0x1af286ba) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0x21af2869) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0x286bca18) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0x2f286bc7) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0x35e50d77) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0x3ca1af26) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0x435e50d5) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0x4a1af284) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0x50d79433) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0x579435e2) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0x5e50d792) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0x650d7941) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0x6bca1af0) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0x7286bc9f) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0x79435e4e) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0x7ffffffd) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0x86bca1ac) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 == 0x86bca1ac) {
     VAR_4 = (VAR_4 + 1) & VAR_0;
 } else if (VAR_2 < 0x8d79435c) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0x9435e50b) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0x9af286ba) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0xa1af2869) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0xa86bca18) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0xaf286bc7) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 == 0xaf286bc7) {
     VAR_4 = (VAR_4 + 2) & VAR_0;
 } else if (VAR_2 < 0xb5e50d77) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0xbca1af26) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0xc35e50d5) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0xca1af284) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0xd0d79433) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0xd79435e2) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0xde50d792) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0xe50d7941) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0xebca1af0) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0xf286bc9f) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else if (VAR_2 < 0xf9435e4e) {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 } else if (VAR_2 < 0xfffffffd) {
     VAR_4 = (VAR_4 + (~VAR_2 & 1)) & VAR_0;
 } else {
     VAR_4 = VAR_4 + (VAR_2 & 1);
 }
        VAR_3 = VAR_2;
        VAR_5 = FUNC_1(&VAR_2);
        FUNC_0(VAR_5 == VAR_4,
                "test: 0x%s RtlUniform(&seed (seed == %x)) returns %x, expected %x\n",
                FUNC_4(VAR_1), VAR_3, VAR_5, VAR_4);
        FUNC_0(VAR_2 == VAR_4,
                "test: 0x%s RtlUniform(&seed (seed == %x)) sets seed to %x, expected %x\n",
                FUNC_4(VAR_1), VAR_3, VAR_5, VAR_4);
    }
    VAR_2 = 0;
    for (VAR_1 = 0; VAR_1 <= 100000; VAR_1++) {
 VAR_4 = (VAR_2 * 0x7fffffed + 0x7fffffc3) % 0x7fffffff;
        VAR_3 = VAR_2;
        VAR_5 = FUNC_1(&VAR_2);
        FUNC_0(VAR_5 == VAR_4,
                "test: 0x%s RtlUniform(&seed (seed == %x)) returns %x, expected %x\n",
                FUNC_4(VAR_1), VAR_3, VAR_5, VAR_4);
        FUNC_0(VAR_2 == VAR_4,
                "test: 0x%s RtlUniform(&seed (seed == %x)) sets seed to %x, expected %x\n",
                FUNC_4(VAR_1), VAR_3, VAR_5, VAR_4);
    }





}
