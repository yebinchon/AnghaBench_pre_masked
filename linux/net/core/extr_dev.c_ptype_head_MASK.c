
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_type {scalar_t__ type; TYPE_1__* dev; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {struct list_head ptype_specific; struct list_head ptype_all; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (scalar_t__) ;
 struct list_head VAR_2 ;
 struct list_head* VAR_3 ;

__attribute__((used)) static inline struct list_head *FUNC_2(const struct packet_type *VAR_4)
{
 if (VAR_4->type == FUNC_0(VAR_0))
  return VAR_4->dev ? &VAR_4->dev->ptype_all : &VAR_2;
 else
  return VAR_4->dev ? &VAR_4->dev->ptype_specific :
     &VAR_3[FUNC_1(VAR_4->type) & VAR_1];
}
