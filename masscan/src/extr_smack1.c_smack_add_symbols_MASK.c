
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SMACK {scalar_t__ is_nocase; } ;


 int FUNC_0 (struct SMACK*,unsigned char const) ;
 unsigned char const FUNC_1 (unsigned char const) ;

__attribute__((used)) static void
FUNC_2(struct SMACK *VAR_0, const unsigned char *VAR_1, unsigned VAR_2)
{
    unsigned VAR_3;


    for (VAR_3=0; VAR_3<VAR_2; VAR_3++) {
        if (VAR_0->is_nocase)
            FUNC_0(VAR_0, FUNC_1(VAR_1[VAR_3]));
        else
            FUNC_0(VAR_0, VAR_1[VAR_3]);
    }
}
