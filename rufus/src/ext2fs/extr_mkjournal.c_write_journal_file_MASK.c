
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int blk_t ;
struct TYPE_4__ {scalar_t__ blocksize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int,char**) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static errcode_t FUNC_6(ext2_filsys VAR_4, char *VAR_5,
        blk_t VAR_6, int VAR_7)
{
 errcode_t VAR_8;
 char *VAR_9 = 0;
 int VAR_10, VAR_11;
 blk_t VAR_12;

 if ((VAR_8 = FUNC_1(VAR_4, VAR_6, VAR_7,
             &VAR_9)))
  return VAR_8;


 if ((VAR_10 = FUNC_4(VAR_5, VAR_2)) < 0) {
  VAR_8 = VAR_3;
  goto errfree;
 }


 VAR_8 = VAR_0;
 VAR_11 = FUNC_5(VAR_10, VAR_9, VAR_4->blocksize);
 if (VAR_11 < 0) {
  VAR_8 = VAR_3;
  goto errout;
 }
 if (VAR_11 != (int) VAR_4->blocksize)
  goto errout;
 FUNC_3(VAR_9, 0, VAR_4->blocksize);

 if (VAR_7 & VAR_1)
  goto success;

 for (VAR_12 = 1; VAR_12 < VAR_6; VAR_12++) {
  VAR_11 = FUNC_5(VAR_10, VAR_9, VAR_4->blocksize);
  if (VAR_11 < 0) {
   VAR_8 = VAR_3;
   goto errout;
  }
  if (VAR_11 != (int) VAR_4->blocksize)
   goto errout;
 }

success:
 VAR_8 = 0;
errout:
 FUNC_0(VAR_10);
errfree:
 FUNC_2(&VAR_9);
 return VAR_8;
}
