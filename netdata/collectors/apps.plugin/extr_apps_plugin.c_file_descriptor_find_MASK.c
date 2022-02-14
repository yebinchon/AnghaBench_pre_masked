
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct file_descriptor {char const* name; int magic; scalar_t__ pos; scalar_t__ count; scalar_t__ hash; } ;
typedef int avl ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static struct file_descriptor *FUNC_2(const char *VAR_1, uint32_t VAR_2) {
    struct file_descriptor VAR_3;
    VAR_3.hash = (VAR_2)?VAR_2:FUNC_1(VAR_1);
    VAR_3.name = VAR_1;
    VAR_3.count = 0;
    VAR_3.pos = 0;




    return (struct file_descriptor *)FUNC_0(&VAR_0, (avl *) &VAR_3);
}
