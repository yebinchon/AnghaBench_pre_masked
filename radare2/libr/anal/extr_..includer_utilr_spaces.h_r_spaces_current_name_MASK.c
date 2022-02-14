
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* current; } ;
struct TYPE_4__ {char const* name; } ;
typedef TYPE_2__ RSpaces ;



__attribute__((used)) static inline const char *FUNC_0(RSpaces *VAR_0) {
 return VAR_0->current? VAR_0->current->name: "*";
}
