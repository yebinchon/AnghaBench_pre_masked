
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdev_state {int memsize; int* vbe; } ;
struct mdev_device {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct mdev_state* FUNC_1 (struct mdev_device*) ;

__attribute__((used)) static int FUNC_2(struct mdev_device *VAR_3)
{
 struct mdev_state *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5 = VAR_4->memsize / (64 * 1024);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->vbe); VAR_6++)
  VAR_4->vbe[VAR_6] = 0;
 VAR_4->vbe[VAR_1] = VAR_0;
 VAR_4->vbe[VAR_2] = VAR_5;
 return 0;
}
