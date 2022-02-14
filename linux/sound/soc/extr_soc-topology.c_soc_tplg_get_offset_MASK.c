
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {TYPE_1__* fw; scalar_t__ pos; } ;
struct TYPE_2__ {scalar_t__ data; } ;



__attribute__((used)) static inline unsigned long FUNC_0(struct soc_tplg *VAR_0)
{
 return (unsigned long)(VAR_0->pos - VAR_0->fw->data);
}
