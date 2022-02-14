
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* str; int base; int value; scalar_t__ alternative; scalar_t__ result; } ;
typedef scalar_t__ NTSTATUS ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (char*,int,int*) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_2(void)
{
    unsigned int VAR_5;
    int VAR_6;
    NTSTATUS VAR_7;

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {

 if (VAR_4[VAR_5].str[0] != '\0') {
     VAR_6 = 0xdeadbeef;
     VAR_7 = FUNC_1(VAR_4[VAR_5].str, VAR_4[VAR_5].base, &VAR_6);
     FUNC_0(VAR_7 == VAR_4[VAR_5].result ||
               (VAR_4[VAR_5].alternative && VAR_7 == VAR_4[VAR_5].alternative),
               "(test %d): call failed: RtlCharToInteger(\"%s\", %d, [out]) has result %x, expected: %x (%x)\n",
        VAR_5, VAR_4[VAR_5].str, VAR_4[VAR_5].base, VAR_7,
               VAR_4[VAR_5].result, VAR_4[VAR_5].alternative);
            if (VAR_7 == VAR_3)
                FUNC_0(VAR_6 == VAR_4[VAR_5].value,
                   "(test %d): call failed: RtlCharToInteger(\"%s\", %d, [out]) assigns value %d, expected: %d\n",
                   VAR_5, VAR_4[VAR_5].str, VAR_4[VAR_5].base, VAR_6, VAR_4[VAR_5].value);
            else
                FUNC_0(VAR_6 == 0 || VAR_6 == 0xdeadbeef,
                   "(test %d): call failed: RtlCharToInteger(\"%s\", %d, [out]) assigns value %d, expected 0 or deadbeef\n",
                   VAR_5, VAR_4[VAR_5].str, VAR_4[VAR_5].base, VAR_6);
 }
    }

    VAR_7 = FUNC_1(VAR_4[1].str, VAR_4[1].base, ((void*)0));
    FUNC_0(VAR_7 == VAR_1,
       "call failed: RtlCharToInteger(\"%s\", %d, NULL) has result %x\n",
       VAR_4[1].str, VAR_4[1].base, VAR_7);

    VAR_7 = FUNC_1(VAR_4[1].str, 20, ((void*)0));
    FUNC_0(VAR_7 == VAR_2,
       "call failed: RtlCharToInteger(\"%s\", 20, NULL) has result %x\n",
       VAR_4[1].str, VAR_7);
}
