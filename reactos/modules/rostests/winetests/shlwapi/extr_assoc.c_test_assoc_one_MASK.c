
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assoc_test_struct {void* extension; void* type; void* perceived; void* flags; int hr; } ;
typedef void* PERCEIVED ;
typedef void* LPWSTR ;
typedef void* INT ;
typedef int HRESULT ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*,void**) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (void*,void*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,char*,void*,void*,...) ;
 int FUNC_6 (void*,void**,void**,void**) ;
 void* FUNC_7 (void*) ;

__attribute__((used)) static void FUNC_8(const struct assoc_test_struct* VAR_1)
{
    LPWSTR VAR_2, VAR_3, VAR_4;
    PERCEIVED VAR_5;
    HRESULT VAR_6;
    INT VAR_7;


    FUNC_1(VAR_1->extension, &VAR_2);
    FUNC_1(VAR_1->type, &VAR_3);

    VAR_5 = 0xdeadbeef;
    VAR_7 = 0xdeadbeef;

    VAR_6 = FUNC_6(VAR_2, &VAR_5, &VAR_7, ((void*)0));
    FUNC_4(VAR_3 ? VAR_0 : VAR_1->hr, VAR_6);
    FUNC_5(VAR_5 == VAR_1->perceived, "%s: got perceived 0x%x, expected 0x%x\n",
       VAR_1->extension, VAR_5, VAR_1->perceived);
    FUNC_5(VAR_7 == VAR_1->flags, "%s: got flags 0x%x, expected 0x%x\n",
       VAR_1->extension, VAR_7, VAR_1->flags);

    VAR_4 = (void *)0xdeadbeef;
    VAR_5 = 0xdeadbeef;
    VAR_7 = 0xdeadbeef;

    VAR_6 = FUNC_6(VAR_2, &VAR_5, &VAR_7, &VAR_4);
    FUNC_4(VAR_3 ? VAR_0 : VAR_1->hr, VAR_6);
    FUNC_5(VAR_5 == VAR_1->perceived, "%s: got perceived 0x%x, expected 0x%x\n",
       VAR_1->extension, VAR_5, VAR_1->perceived);
    FUNC_5(VAR_7 == VAR_1->flags, "%s: got flags 0x%x, expected 0x%x\n",
       VAR_1->extension, VAR_7, VAR_1->flags);

    if (!VAR_3)
    {
        FUNC_5(VAR_4 == (void *)0xdeadbeef || FUNC_3(VAR_4 == ((void*)0)) ,
           "%s: got type %p, expected 0xdeadbeef\n", VAR_1->extension, VAR_4);
    }
    else if (VAR_4 == (void *)0xdeadbeef)
    {
        FUNC_5(VAR_4 != (void *)0xdeadbeef, "%s: got type %p, expected '%s'\n",
           VAR_1->extension, VAR_4, VAR_1->type);
    }
    else
    {
        FUNC_5(FUNC_2(VAR_3, VAR_4) == 0, "%s: got type %s, expected '%s'\n",
           VAR_1->extension, FUNC_7(VAR_4), VAR_1->type);
    }

    FUNC_0(VAR_4);
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
}
