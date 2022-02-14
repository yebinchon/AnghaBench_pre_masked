
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {int l_start; int l_len; int l_whence; int l_type; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,struct flock*) ;

BOOL
FUNC_1(int VAR_5, int VAR_6, int VAR_7)
{
 struct flock VAR_8;

 VAR_8.l_type = VAR_1;
 VAR_8.l_whence = VAR_3;
 VAR_8.l_start = VAR_6;
 VAR_8.l_len = VAR_7;
 if (FUNC_0(VAR_5, VAR_0, &VAR_8) == -1)
  return VAR_2;
 return VAR_4;
}
