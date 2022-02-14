
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
struct fw_block {int flags; size_t size; int crc; int name; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,size_t,int,int *) ;
 int FUNC_4 (int *,size_t,int *) ;

int
FUNC_5(struct fw_block *VAR_3)
{
 FILE *VAR_4;
 uint8_t VAR_5[VAR_1];
 uint32_t VAR_6 = sizeof(VAR_5);
 int VAR_7 = -1;
 size_t VAR_8;

 if ((VAR_3->flags & VAR_0) == 0) {
  VAR_7 = 0;
  goto out;
 }

 VAR_2 = 0;
 VAR_4 = FUNC_2(VAR_3->name,"r");
 if (VAR_2) {
  FUNC_0(1,"unable to open file %s", VAR_3->name);
  goto out;
 }

 VAR_3->crc = 0;
 VAR_8 = VAR_3->size;
 while (VAR_8 > 0) {
  if (VAR_8 < VAR_6)
   VAR_6 = VAR_8;

  VAR_2 = 0;
  FUNC_3(VAR_5, VAR_6, 1, VAR_4);
  if (VAR_2) {
   FUNC_0(1,"unable to read from file %s", VAR_3->name);
   goto out_close;
  }

  FUNC_4(VAR_5, VAR_6, &VAR_3->crc);
  VAR_8 -= VAR_6;
 }

 VAR_7 = 0;

out_close:
 FUNC_1(VAR_4);
out:
 return VAR_7;
}
