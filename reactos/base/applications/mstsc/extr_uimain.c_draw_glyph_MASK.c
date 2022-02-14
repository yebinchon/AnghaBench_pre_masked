
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {int height; int width; scalar_t__ data; } ;


 int FUNC_0 (int,int,char*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, int VAR_1, void * VAR_2, int VAR_3)
{
  struct bitmap * VAR_4;

  VAR_4 = VAR_2;
  FUNC_0(VAR_0, VAR_1, (char *)VAR_4->data, VAR_4->width, VAR_4->height, VAR_3);
}
