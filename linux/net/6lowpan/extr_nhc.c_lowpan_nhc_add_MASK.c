
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lowpan_nhc {scalar_t__ idlen; size_t nexthdr; int (* idsetup ) (struct lowpan_nhc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 struct lowpan_nhc** VAR_3 ;
 int FUNC_1 (struct lowpan_nhc*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct lowpan_nhc*) ;

int FUNC_5(struct lowpan_nhc *VAR_5)
{
 int VAR_6;

 if (!VAR_5->idlen || !VAR_5->idsetup)
  return -VAR_1;

 FUNC_0(VAR_5->idlen > VAR_2,
    "LOWPAN_NHC_MAX_ID_LEN should be updated to %zd.\n",
    VAR_5->idlen);

 VAR_5->idsetup(VAR_5);

 FUNC_2(&VAR_4);

 if (VAR_3[VAR_5->nexthdr]) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 < 0)
  goto out;

 VAR_3[VAR_5->nexthdr] = VAR_5;
out:
 FUNC_3(&VAR_4);
 return VAR_6;
}
