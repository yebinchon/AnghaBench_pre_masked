
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct aa_label {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 struct aa_label* FUNC_0 () ;
 int FUNC_1 (struct aa_label*) ;
 int FUNC_2 (struct aa_label*,struct path const*,char const*,unsigned long) ;
 int FUNC_3 (struct aa_label*,struct path const*,unsigned long) ;
 int FUNC_4 (struct aa_label*,struct path const*,char const*) ;
 int FUNC_5 (struct aa_label*,char const*,struct path const*,char const*,unsigned long,void*) ;
 int FUNC_6 (struct aa_label*,struct path const*,unsigned long,void*) ;
 int FUNC_7 (struct aa_label*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_10, const struct path *VAR_11,
        const char *VAR_12, unsigned long VAR_13, void *VAR_14)
{
 struct aa_label *VAR_15;
 int VAR_16 = 0;


 if ((VAR_13 & VAR_2) == VAR_3)
  VAR_13 &= ~VAR_2;

 VAR_13 &= ~VAR_0;

 VAR_15 = FUNC_0();
 if (!FUNC_7(VAR_15)) {
  if (VAR_13 & VAR_6)
   VAR_16 = FUNC_6(VAR_15, VAR_11, VAR_13, VAR_14);
  else if (VAR_13 & VAR_1)
   VAR_16 = FUNC_2(VAR_15, VAR_11, VAR_10, VAR_13);
  else if (VAR_13 & (VAR_7 | VAR_5 | VAR_8 |
      VAR_9))
   VAR_16 = FUNC_3(VAR_15, VAR_11, VAR_13);
  else if (VAR_13 & VAR_4)
   VAR_16 = FUNC_4(VAR_15, VAR_11, VAR_10);
  else
   VAR_16 = FUNC_5(VAR_15, VAR_10, VAR_11, VAR_12,
          VAR_13, VAR_14);
 }
 FUNC_1(VAR_15);

 return VAR_16;
}
