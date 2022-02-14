
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 long FUNC_0 (char const*,int,unsigned long) ;
 int FUNC_1 (char*) ;

int FUNC_2(unsigned int *VAR_3, const char *VAR_4)
{
 unsigned long VAR_5 = VAR_1;
 long VAR_6;

 if (VAR_5 > VAR_0 / VAR_2)
  VAR_5 = VAR_0 / VAR_2;

 VAR_6 = FUNC_0(VAR_4, 1, VAR_5);
 if (VAR_6 < 0) {
  FUNC_1("Invalid argument for --mmap_pages/-m\n");
  return -1;
 }

 *VAR_3 = VAR_6;
 return 0;
}
