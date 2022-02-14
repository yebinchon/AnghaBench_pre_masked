
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int memory_data; TYPE_3__* (* malloc ) (int,int ) ;} ;
struct TYPE_8__ {scalar_t__ heap_used; scalar_t__ heap_limit; TYPE_1__ memctl; } ;
typedef TYPE_2__ dfa_match_block ;
struct TYPE_9__ {int size; int free; struct TYPE_9__* next; } ;
typedef TYPE_3__ RWS_anchor ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (int,int ) ;

__attribute__((used)) static int
FUNC_1(RWS_anchor **VAR_5, unsigned int VAR_6, dfa_match_block *VAR_7)
{
RWS_anchor *VAR_8 = *VAR_5;
RWS_anchor *VAR_9;

if (VAR_8->next != ((void*)0))
  {
  VAR_9 = VAR_8->next;
  }





else
  {
  uint32_t VAR_10 = (VAR_8->size >= VAR_4/2)? VAR_4/2 : VAR_8->size * 2;
  uint32_t VAR_11 = VAR_10/(1024/sizeof(int));

  if (VAR_11 + VAR_7->heap_used > VAR_7->heap_limit)
    VAR_11 = (uint32_t)(VAR_7->heap_limit - VAR_7->heap_used);
  VAR_10 = VAR_11*(1024/sizeof(int));

  if (VAR_10 < VAR_3 + VAR_6 + VAR_2)
    return VAR_0;
  VAR_9 = VAR_7->memctl.malloc(VAR_10*sizeof(int), VAR_7->memctl.memory_data);
  if (VAR_9 == ((void*)0)) return VAR_1;
  VAR_7->heap_used += VAR_11;
  VAR_9->next = ((void*)0);
  VAR_9->size = VAR_10;
  VAR_8->next = VAR_9;
  }

VAR_9->free = VAR_9->size - VAR_2;
*VAR_5 = VAR_9;
return 0;
}
