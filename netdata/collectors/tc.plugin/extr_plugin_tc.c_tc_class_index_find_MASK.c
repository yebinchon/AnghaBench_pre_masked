
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tc_device {int classes_index; } ;
struct tc_class {char* id; scalar_t__ hash; } ;
typedef int avl ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static inline struct tc_class *FUNC_2(struct tc_device *VAR_0, const char *VAR_1, uint32_t VAR_2) {
    struct tc_class VAR_3;
    VAR_3.id = (char *)VAR_1;
    VAR_3.hash = (VAR_2)?VAR_2:FUNC_1(VAR_3.id);

    return (struct tc_class *)FUNC_0(&(VAR_0->classes_index), (avl *) &VAR_3);
}
