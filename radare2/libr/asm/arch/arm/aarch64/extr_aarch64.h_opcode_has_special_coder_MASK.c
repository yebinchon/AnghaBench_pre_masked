
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ aarch64_opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static inline bfd_boolean
FUNC_0 (const aarch64_opcode *VAR_13)
{
  return (VAR_13->flags & (VAR_8 | VAR_5 | VAR_9 | VAR_2 | VAR_10 | VAR_11
   | VAR_3 | VAR_4 | VAR_6 | VAR_7 | VAR_1)) ? VAR_12
    : VAR_0;
}
