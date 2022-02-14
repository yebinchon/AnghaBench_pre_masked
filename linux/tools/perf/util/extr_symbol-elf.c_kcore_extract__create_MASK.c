
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcore_extract {int extract_filename; int len; int offs; int addr; int kcore_filename; } ;
struct kcore {int fd; int elfclass; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct kcore*,int,scalar_t__,int ,int ) ;
 int FUNC_2 (struct kcore*) ;
 scalar_t__ FUNC_3 (struct kcore*,struct kcore*,size_t) ;
 scalar_t__ FUNC_4 (struct kcore*,int ,int ,int) ;
 scalar_t__ FUNC_5 (struct kcore*,int ) ;
 scalar_t__ FUNC_6 (struct kcore*) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct kcore_extract *VAR_2)
{
 struct kcore VAR_3;
 struct kcore VAR_4;
 size_t VAR_5 = 1;
 int VAR_6 = 0, VAR_7 = -1;
 off_t VAR_8 = VAR_1, VAR_9;

 if (FUNC_5(&VAR_3, VAR_2->kcore_filename))
  return -1;

 FUNC_7(VAR_2->extract_filename, VAR_0);
 if (FUNC_4(&VAR_4, VAR_2->extract_filename, VAR_3.elfclass, 1))
  goto out_kcore_close;

 if (FUNC_3(&VAR_3, &VAR_4, VAR_5))
  goto out_extract_close;

 if (FUNC_1(&VAR_4, VAR_6, VAR_8, VAR_2->addr, VAR_2->len))
  goto out_extract_close;

 VAR_9 = FUNC_6(&VAR_4);
 if (VAR_9 < 0 || VAR_9 > VAR_8)
  goto out_extract_close;

 if (FUNC_0(VAR_3.fd, VAR_2->offs, VAR_4.fd, VAR_8, VAR_2->len))
  goto out_extract_close;

 VAR_7 = 0;

out_extract_close:
 FUNC_2(&VAR_4);
 if (VAR_7)
  FUNC_8(VAR_2->extract_filename);
out_kcore_close:
 FUNC_2(&VAR_3);

 return VAR_7;
}
