
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {int l_type; unsigned int l_start; unsigned int l_len; scalar_t__ l_pid; int l_whence; } ;
typedef int lk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,struct flock*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct flock*,int ,int) ;
 int FUNC_4 (char*,char const*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(
  int VAR_5,
  int VAR_6,
  unsigned int VAR_7,
  unsigned int VAR_8,
  const char *VAR_9
){
  struct flock VAR_10;

  FUNC_3(&VAR_10, 0, sizeof(VAR_10));
  VAR_10.l_type = VAR_6;
  VAR_10.l_whence = VAR_2;
  VAR_10.l_start = VAR_7;
  VAR_10.l_len = VAR_8;
  if( FUNC_1(VAR_5, VAR_0, &VAR_10)==(-1) ){
    FUNC_2(VAR_4, "fcntl(%d) failed: errno=%d\n", VAR_5, VAR_3);
    FUNC_0(1);
  }
  if( VAR_10.l_type==VAR_1 ) return 0;
  FUNC_4("%s lock held by %d\n", VAR_9, (int)VAR_10.l_pid);
  return 1;
}
