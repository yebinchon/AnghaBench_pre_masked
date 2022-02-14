
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktgen_dev {char* result; int sofar; int cur_pkt_size; scalar_t__ errors; int idle_acc; int started_at; int stopped_at; } ;
typedef int ktime_t ;
typedef int __u64 ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,unsigned long long,unsigned long long,unsigned long long,unsigned long long,...) ;

__attribute__((used)) static void FUNC_7(struct pktgen_dev *VAR_1, int VAR_2)
{
 __u64 VAR_3, VAR_4, VAR_5;
 char *VAR_6 = VAR_1->result;
 ktime_t VAR_7 = FUNC_2(VAR_1->stopped_at,
        VAR_1->started_at);
 ktime_t VAR_8 = FUNC_5(VAR_1->idle_acc);

 VAR_6 += FUNC_6(VAR_6, "OK: %llu(c%llu+d%llu) usec, %llu (%dbyte,%dfrags)\n",
       (unsigned long long)FUNC_4(VAR_7),
       (unsigned long long)FUNC_4(FUNC_2(VAR_7, VAR_8)),
       (unsigned long long)FUNC_4(VAR_8),
       (unsigned long long)VAR_1->sofar,
       VAR_1->cur_pkt_size, VAR_2);

 VAR_5 = FUNC_0(VAR_1->sofar * VAR_0,
   FUNC_3(VAR_7));

 VAR_3 = VAR_5 * 8 * VAR_1->cur_pkt_size;

 VAR_4 = VAR_3;
 FUNC_1(VAR_4, 1000000);
 VAR_6 += FUNC_6(VAR_6, "  %llupps %lluMb/sec (%llubps) errors: %llu",
       (unsigned long long)VAR_5,
       (unsigned long long)VAR_4,
       (unsigned long long)VAR_3,
       (unsigned long long)VAR_1->errors);
}
