
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {scalar_t__ num_next_frames; } ;


 scalar_t__ FUNC_0 (struct MPContext*,int) ;

__attribute__((used)) static bool FUNC_1(struct MPContext *VAR_0)
{
    return VAR_0->num_next_frames < FUNC_0(VAR_0, 0);
}
