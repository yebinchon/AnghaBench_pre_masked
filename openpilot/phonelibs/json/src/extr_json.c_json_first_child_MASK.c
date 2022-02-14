
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* head; } ;
struct TYPE_6__ {scalar_t__ tag; TYPE_1__ children; } ;
typedef TYPE_2__ JsonNode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

JsonNode *FUNC_0(const JsonNode *VAR_2)
{
 if (VAR_2 != ((void*)0) && (VAR_2->tag == VAR_0 || VAR_2->tag == VAR_1))
  return VAR_2->children.head;
 return ((void*)0);
}
