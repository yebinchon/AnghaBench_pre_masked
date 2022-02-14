
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tc_device {char* id; scalar_t__ hash; } ;
typedef int avl ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_0 ;

__attribute__((used)) static inline struct tc_device *FUNC_2(const char *VAR_1, uint32_t VAR_2) {
    struct tc_device VAR_3;
    VAR_3.id = (char *)VAR_1;
    VAR_3.hash = (VAR_2)?VAR_2:FUNC_1(VAR_3.id);

    return (struct tc_device *)FUNC_0(&(VAR_0), (avl *)&VAR_3);
}
