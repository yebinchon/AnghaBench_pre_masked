
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 scalar_t__ FUNC_1 (unsigned char*,int,int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 unsigned char* FUNC_3 (int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 () ;
 int VAR_2 ;

__attribute__((used)) static unsigned char *FUNC_6(int VAR_3, int VAR_4){
  int VAR_5;
  unsigned char *VAR_6 = FUNC_3(VAR_3);
  if( VAR_6==0 ) FUNC_5();
  FUNC_2(VAR_1, VAR_4, VAR_0);
  VAR_5 = (int)FUNC_1(VAR_6, 1, VAR_3, VAR_1);
  if( VAR_5<0 ){
    FUNC_0(VAR_2, "I/O error reading %d bytes from %d\n", VAR_3, VAR_4);
    FUNC_4(VAR_6, 0, VAR_3);
  }else if( VAR_5<VAR_3 ){
    FUNC_0(VAR_2, "Short read: got only %d of %d bytes from %d\n",
                     VAR_5, VAR_3, VAR_4);
    FUNC_4(&VAR_6[VAR_5], 0, VAR_3-VAR_5);
  }
  return VAR_6;
}
