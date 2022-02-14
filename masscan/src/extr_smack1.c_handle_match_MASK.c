
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SmackMatches {unsigned int m_count; size_t* m_ids; } ;
struct SMACK {struct SmackMatches* m_match; } ;



__attribute__((used)) static unsigned
FUNC_0( struct SMACK * VAR_0,
                unsigned VAR_1,
                int (*VAR_2)(size_t VAR_3, int VAR_4, void *VAR_5),
                void *VAR_6,
                unsigned VAR_7)
{
    unsigned VAR_8;
    struct SmackMatches *VAR_9 = &VAR_0->m_match[VAR_7];




    for (VAR_8=0; VAR_8<VAR_9->m_count; VAR_8++) {
        size_t VAR_10 = VAR_9->m_ids[VAR_8];
        VAR_2(VAR_10, VAR_1, VAR_6);
    }

    return VAR_9->m_count;
}
