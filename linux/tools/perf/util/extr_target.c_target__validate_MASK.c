
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {int system_wide; int per_thread; int * cpu_list; int * uid_str; scalar_t__ tid; scalar_t__ pid; } ;
typedef enum target_errno { ____Placeholder_target_errno } target_errno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

enum target_errno FUNC_0(struct target *VAR_7)
{
 enum target_errno VAR_8 = VAR_3;

 if (VAR_7->pid)
  VAR_7->tid = VAR_7->pid;


 if (VAR_7->tid && VAR_7->cpu_list) {
  VAR_7->cpu_list = ((void*)0);
  if (VAR_8 == VAR_3)
   VAR_8 = VAR_0;
 }


 if (VAR_7->tid && VAR_7->uid_str) {
  VAR_7->uid_str = ((void*)0);
  if (VAR_8 == VAR_3)
   VAR_8 = VAR_2;
 }


 if (VAR_7->uid_str && VAR_7->cpu_list) {
  VAR_7->cpu_list = ((void*)0);
  if (VAR_8 == VAR_3)
   VAR_8 = VAR_5;
 }


 if (VAR_7->tid && VAR_7->system_wide) {
  VAR_7->system_wide = 0;
  if (VAR_8 == VAR_3)
   VAR_8 = VAR_1;
 }


 if (VAR_7->uid_str && VAR_7->system_wide) {
  VAR_7->system_wide = 0;
  if (VAR_8 == VAR_3)
   VAR_8 = VAR_6;
 }


 if (VAR_7->per_thread && (VAR_7->system_wide || VAR_7->cpu_list)) {
  VAR_7->per_thread = 0;
  if (VAR_8 == VAR_3)
   VAR_8 = VAR_4;
 }

 return VAR_8;
}
