
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct section {char* name; scalar_t__ hash; } ;
struct config {int index; } ;
typedef int avl ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static struct section *FUNC_2(struct config *VAR_0, const char *VAR_1, uint32_t VAR_2) {
    struct section VAR_3;
    VAR_3.hash = (VAR_2)?VAR_2:FUNC_1(VAR_1);
    VAR_3.name = (char *)VAR_1;

    return (struct section *)FUNC_0(&VAR_0->index, (avl *) &VAR_3);
}
