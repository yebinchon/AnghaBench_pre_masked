
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int signaled; } ;
struct mic_info {TYPE_1__ mic_virtblk; struct mic_info* next; } ;
typedef int siginfo_t ;
struct TYPE_4__ {struct mic_info* next; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(int VAR_1, siginfo_t *VAR_2, void *VAR_3)
{
 struct mic_info *VAR_4;

 for (VAR_4 = VAR_0.next; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
  VAR_4->mic_virtblk.signaled = 1 ;
}
