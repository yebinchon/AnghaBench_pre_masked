
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {char* long_name; scalar_t__ kernel; } ;



__attribute__((used)) static inline bool FUNC_0(struct dso *VAR_0)
{
 return VAR_0->kernel && VAR_0->long_name[0] != '/';
}
