
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* cmp ) (struct key*,TYPE_1__*) ;} ;
struct keyring_search_context {TYPE_1__ match_data; } ;
struct key {int flags; } ;
struct TYPE_4__ {struct key* cached_requested_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 struct key* FUNC_0 (struct key*) ;
 scalar_t__ FUNC_1 (struct key*,TYPE_1__*) ;

__attribute__((used)) static struct key *FUNC_2(struct keyring_search_context *VAR_3)
{
 return ((void*)0);
}
