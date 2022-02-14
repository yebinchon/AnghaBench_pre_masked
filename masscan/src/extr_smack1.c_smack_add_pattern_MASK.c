
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SmackPattern {unsigned int pattern_length; int is_anchor_begin; int is_anchor_end; int is_snmp_hack; int is_wildcards; size_t id; int pattern; } ;
struct SMACK {int is_anchor_begin; int is_anchor_end; int m_pattern_count; int m_pattern_max; struct SmackPattern** m_pattern_list; int is_nocase; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct SmackPattern**) ;
 int FUNC_3 (unsigned char const*,unsigned int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct SmackPattern**,struct SmackPattern**,int) ;
 int FUNC_6 (struct SMACK*,unsigned char const*,int) ;
 int VAR_4 ;

void
FUNC_7(
    struct SMACK * VAR_5,
    const void * VAR_6,
    unsigned VAR_7,
    size_t VAR_8,
    unsigned VAR_9)
{
    const unsigned char *VAR_10 = (const unsigned char*)VAR_6;
    struct SmackPattern *VAR_11;





    VAR_11 = (struct SmackPattern *)FUNC_4(sizeof (struct SmackPattern));
    if (VAR_11 == ((void*)0)) {
        FUNC_1(VAR_4, "%s: out of memory error\n", "smack");
        FUNC_0(1);
    }
    VAR_11->pattern_length = VAR_7;
    VAR_11->is_anchor_begin = ((VAR_9 & VAR_0) > 0);
    VAR_11->is_anchor_end = ((VAR_9 & VAR_1) > 0);
    VAR_11->is_snmp_hack = ((VAR_9 & VAR_2) > 0);
    VAR_11->is_wildcards = ((VAR_9 & VAR_3) > 0);
    VAR_11->id = VAR_8;
    VAR_11->pattern = FUNC_3(VAR_10, VAR_7, VAR_5->is_nocase);
    if (VAR_11->is_anchor_begin)
        VAR_5->is_anchor_begin = 1;
    if (VAR_11->is_anchor_end)
        VAR_5->is_anchor_end = 1;







    FUNC_6(VAR_5, VAR_10, VAR_7);
    if (VAR_11->is_snmp_hack)
        FUNC_6(VAR_5, (const unsigned char *)"\x80", 1);






    if (VAR_5->m_pattern_count + 1 >= VAR_5->m_pattern_max) {
        struct SmackPattern **VAR_12;
        unsigned VAR_13;

        VAR_13 = VAR_5->m_pattern_max * 2 + 1;
        VAR_12 = (struct SmackPattern **)FUNC_4(sizeof(*VAR_12)*VAR_13);
        if (VAR_12 == ((void*)0)) {
            FUNC_1(VAR_4, "%s: out of memory error\n", "smack");
            FUNC_0(1);
        }

        if (VAR_5->m_pattern_list) {
            FUNC_5( VAR_12,
                    VAR_5->m_pattern_list,
                    sizeof(*VAR_12) * VAR_5->m_pattern_count);
            FUNC_2(VAR_5->m_pattern_list);
        }

        VAR_5->m_pattern_list = VAR_12;
        VAR_5->m_pattern_max = VAR_13;
    }





    VAR_5->m_pattern_list[VAR_5->m_pattern_count] = VAR_11;
    VAR_5->m_pattern_count++;
}
