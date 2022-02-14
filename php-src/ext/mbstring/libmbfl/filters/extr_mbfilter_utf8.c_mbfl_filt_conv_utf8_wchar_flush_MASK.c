
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; int cache; int data; int (* flush_function ) (int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int ) ;

int FUNC_3(mbfl_convert_filter *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_1 = VAR_0->status;
 VAR_2 = VAR_0->cache;

 VAR_0->status = 0;
 VAR_0->cache = 0;

 if (VAR_1 != 0) {
  FUNC_0(FUNC_1(VAR_2, VAR_0));
 }

 if (VAR_0->flush_function != ((void*)0)) {
  (*VAR_0->flush_function)(VAR_0->data);
 }
 return 0;
}
