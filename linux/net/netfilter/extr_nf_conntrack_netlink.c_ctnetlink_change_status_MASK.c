
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conn {unsigned int status; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (struct nf_conn*,unsigned int,int ) ;
 int FUNC_1 (struct nlattr const* const) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct nf_conn *VAR_7, const struct nlattr * const VAR_8[])
{
 unsigned long VAR_9;
 unsigned int VAR_10 = FUNC_2(FUNC_1(VAR_8[VAR_0]));
 VAR_9 = VAR_7->status ^ VAR_10;

 if (VAR_9 & (VAR_5|VAR_3|VAR_4))

  return -VAR_1;

 if (VAR_9 & VAR_6 && !(VAR_10 & VAR_6))

  return -VAR_1;

 if (VAR_9 & VAR_2 && !(VAR_10 & VAR_2))

  return -VAR_1;

 FUNC_0(VAR_7, VAR_10, 0);
 return 0;
}
