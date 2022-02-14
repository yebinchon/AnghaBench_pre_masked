
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SmackMatches {int dummy; } ;
struct SMACK {struct SmackMatches* m_match; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct SmackMatches*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct SMACK *VAR_1, unsigned VAR_2)
{
    struct SmackMatches *VAR_3;

    VAR_3 = (struct SmackMatches *)FUNC_2(sizeof(*VAR_3) * VAR_2);
    if (VAR_3 == ((void*)0)) {
        FUNC_1(VAR_0, "%s: out of memory error\n", "smack");
        FUNC_0(1);
    }
    FUNC_3(VAR_3, 0, sizeof(*VAR_3) * VAR_2);

    VAR_1->m_match = VAR_3;
}
