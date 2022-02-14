
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct path {struct dentry* dentry; int mnt; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,struct path*,unsigned int const,unsigned int) ;
 int FUNC_1 (int,struct path*,unsigned int const) ;

__attribute__((used)) static int FUNC_2(const struct path *VAR_7, struct dentry *VAR_8,
        umode_t VAR_9, unsigned int VAR_10)
{
 struct path VAR_11 = { .mnt = VAR_7->mnt, .dentry = VAR_8 };
 int VAR_12 = VAR_2;
 const unsigned int VAR_13 = VAR_9 & VAR_0;

 switch (VAR_9 & VAR_1) {
 case 130:
  VAR_12 = VAR_4;
  break;
 case 131:
  VAR_12 = VAR_3;
  break;
 default:
  goto no_dev;
 }
 return FUNC_0(VAR_12, &VAR_11, VAR_13, VAR_10);
 no_dev:
 switch (VAR_9 & VAR_1) {
 case 129:
  VAR_12 = VAR_5;
  break;
 case 128:
  VAR_12 = VAR_6;
  break;
 }
 return FUNC_1(VAR_12, &VAR_11, VAR_13);
}
