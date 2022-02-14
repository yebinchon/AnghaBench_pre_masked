
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {scalar_t__ d_sub; } ;
struct MPContext {int play_dir; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct MPContext*,int *) ;

__attribute__((used)) static void FUNC_3(struct MPContext *VAR_0, struct track *VAR_1)
{
    if (VAR_1->d_sub) {
        FUNC_0(VAR_1->d_sub);
        FUNC_1(VAR_1->d_sub, VAR_0->play_dir);
    }
    FUNC_2(VAR_0, ((void*)0));
}
