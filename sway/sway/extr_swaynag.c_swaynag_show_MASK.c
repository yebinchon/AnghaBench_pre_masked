
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaynag_instance {int * fd; int * client; scalar_t__ detailed; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct swaynag_instance *VAR_0) {
 if (VAR_0->detailed && VAR_0->client != ((void*)0)) {
  FUNC_0(VAR_0->fd[1]);
 }
}
