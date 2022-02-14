
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int coder; int (* get_check ) (int ) ;} ;
struct TYPE_5__ {TYPE_1__ next; } ;
typedef TYPE_2__ lzma_coder ;
typedef int lzma_check ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static lzma_check
FUNC_1(const lzma_coder *VAR_1)
{

 return VAR_1->next.get_check == ((void*)0) ? VAR_0
   : VAR_1->next.get_check(VAR_1->next.coder);
}
