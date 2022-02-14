
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_wstat {scalar_t__ extension; scalar_t__ muid; scalar_t__ gid; scalar_t__ uid; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct p9_wstat *VAR_2, int VAR_3)
{
 int VAR_4;





 VAR_4 = 2+4+13+4+4+4+8+2+2+2+2;

 if (VAR_2->name)
  VAR_4 += FUNC_0(VAR_2->name);
 if (VAR_2->uid)
  VAR_4 += FUNC_0(VAR_2->uid);
 if (VAR_2->gid)
  VAR_4 += FUNC_0(VAR_2->gid);
 if (VAR_2->muid)
  VAR_4 += FUNC_0(VAR_2->muid);

 if ((VAR_3 == VAR_1) ||
  (VAR_3 == VAR_0)) {
  VAR_4 += 2+4+4+4;
  if (VAR_2->extension)
   VAR_4 += FUNC_0(VAR_2->extension);
 }

 return VAR_4;
}
