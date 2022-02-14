
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taskstats {char* ac_comm; scalar_t__ cancelled_write_bytes; scalar_t__ write_bytes; scalar_t__ read_bytes; } ;


 int FUNC_0 (char*,char*,unsigned long long,unsigned long long,unsigned long long) ;

__attribute__((used)) static void FUNC_1(struct taskstats *VAR_0)
{
 FUNC_0("%s: read=%llu, write=%llu, cancelled_write=%llu\n",
  VAR_0->ac_comm,
  (unsigned long long)VAR_0->read_bytes,
  (unsigned long long)VAR_0->write_bytes,
  (unsigned long long)VAR_0->cancelled_write_bytes);
}
