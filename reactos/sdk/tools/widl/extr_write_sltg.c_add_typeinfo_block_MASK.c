
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; int attrs; } ;
typedef TYPE_1__ type_t ;
struct sltg_typelib {int dummy; } ;
struct TYPE_6__ {int cval; } ;
typedef TYPE_2__ expr_t ;
struct TYPE_7__ {int member_0; } ;
typedef TYPE_3__ GUID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sltg_typelib*,int ) ;
 void* FUNC_1 (int ,int ) ;
 char* FUNC_2 () ;
 int FUNC_3 (struct sltg_typelib*,void*,int,char const*) ;
 int FUNC_4 (char*,char const*) ;
 short FUNC_5 (char const*) ;
 void* FUNC_6 (int) ;

__attribute__((used)) static const char *FUNC_7(struct sltg_typelib *VAR_2, const type_t *VAR_3, int VAR_4)
{
    const char *VAR_5, *VAR_6;
    void *VAR_7;
    short *VAR_8;
    int VAR_9, VAR_10 = 0;
    GUID VAR_11 = { 0 };
    const expr_t *VAR_12;

    VAR_5 = FUNC_2();
    VAR_6 = FUNC_2();

    VAR_12 = FUNC_1(VAR_3->attrs, VAR_0);
    if (VAR_12) VAR_10 = VAR_12->cval;

    VAR_8 = FUNC_1(VAR_3->attrs, VAR_1);
    if (VAR_8) VAR_11 = *(GUID *)VAR_8;

    VAR_9 = sizeof(short) * 8 + 10 * 2 + sizeof(int) + sizeof(GUID);

    VAR_7 = FUNC_6(VAR_9);
    VAR_8 = VAR_7;
    *VAR_8++ = FUNC_5(VAR_5);
    FUNC_4((char *)VAR_8, VAR_5);
    VAR_8 = (short *)((char *)VAR_8 + FUNC_5(VAR_5));
    *VAR_8++ = FUNC_5(VAR_6);
    FUNC_4((char *)VAR_8, VAR_6);
    VAR_8 = (short *)((char *)VAR_8 + FUNC_5(VAR_6));
    *VAR_8++ = -1;
    *VAR_8++ = FUNC_0(VAR_2, VAR_3->name);
    *VAR_8++ = 0;
    *VAR_8++ = -1;
    *(int *)VAR_8 = VAR_10;
    VAR_8 += 2;
    *VAR_8++ = -1;
    *(GUID *)VAR_8 = VAR_11;
    VAR_8 += sizeof(GUID)/2;
    *VAR_8 = VAR_4;

    FUNC_3(VAR_2, VAR_7, VAR_9, VAR_5);

    return VAR_5;
}
