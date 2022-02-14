
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {scalar_t__ l_type; scalar_t__ l_start; scalar_t__ l_len; int l_pid; int l_whence; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,struct flock*) ;
 int FUNC_1 (char*,int,int,int,char*) ;

__attribute__((used)) static int FUNC_2(int VAR_4, off_t VAR_5, off_t VAR_6){
  int VAR_7 = 0;
  struct flock VAR_8;

  VAR_8.l_type = VAR_2;
  VAR_8.l_whence = VAR_3;
  VAR_8.l_start = VAR_5;
  VAR_8.l_len = VAR_6-VAR_5;
  FUNC_0(VAR_4, VAR_0, &VAR_8);
  if( VAR_8.l_type==VAR_1 ) return 0;
  FUNC_1("start: %-12d len: %-5d pid: %-5d type: %s\n",
       (int)VAR_8.l_start, (int)VAR_8.l_len,
       VAR_8.l_pid, VAR_8.l_type==VAR_2 ? "WRLCK" : "RDLCK");
  VAR_7++;
  if( VAR_8.l_start>VAR_5 ){
    VAR_7 += FUNC_2(VAR_4, VAR_5, VAR_8.l_start-1);
  }
  if( VAR_8.l_start+VAR_8.l_len<VAR_6 ){
    VAR_7 += FUNC_2(VAR_4, VAR_8.l_start+VAR_8.l_len+1, VAR_6);
  }
  return VAR_7;
}
